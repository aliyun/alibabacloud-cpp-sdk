// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRECORDDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETRECORDDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetRecordDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRecordDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Acid, acid_);
      DARABONBA_PTR_TO_JSON(OssLink, ossLink_);
    };
    friend void from_json(const Darabonba::Json& j, GetRecordDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Acid, acid_);
      DARABONBA_PTR_FROM_JSON(OssLink, ossLink_);
    };
    GetRecordDataResponseBodyData() = default ;
    GetRecordDataResponseBodyData(const GetRecordDataResponseBodyData &) = default ;
    GetRecordDataResponseBodyData(GetRecordDataResponseBodyData &&) = default ;
    GetRecordDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRecordDataResponseBodyData() = default ;
    GetRecordDataResponseBodyData& operator=(const GetRecordDataResponseBodyData &) = default ;
    GetRecordDataResponseBodyData& operator=(GetRecordDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acid_ != nullptr
        && this->ossLink_ != nullptr; };
    // acid Field Functions 
    bool hasAcid() const { return this->acid_ != nullptr;};
    void deleteAcid() { this->acid_ = nullptr;};
    inline string acid() const { DARABONBA_PTR_GET_DEFAULT(acid_, "") };
    inline GetRecordDataResponseBodyData& setAcid(string acid) { DARABONBA_PTR_SET_VALUE(acid_, acid) };


    // ossLink Field Functions 
    bool hasOssLink() const { return this->ossLink_ != nullptr;};
    void deleteOssLink() { this->ossLink_ = nullptr;};
    inline string ossLink() const { DARABONBA_PTR_GET_DEFAULT(ossLink_, "") };
    inline GetRecordDataResponseBodyData& setOssLink(string ossLink) { DARABONBA_PTR_SET_VALUE(ossLink_, ossLink) };


  protected:
    std::shared_ptr<string> acid_ = nullptr;
    std::shared_ptr<string> ossLink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
