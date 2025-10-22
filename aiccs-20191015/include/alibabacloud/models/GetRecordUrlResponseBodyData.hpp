// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRECORDURLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETRECORDURLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetRecordUrlResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRecordUrlResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Acid, acid_);
      DARABONBA_PTR_TO_JSON(OssLink, ossLink_);
    };
    friend void from_json(const Darabonba::Json& j, GetRecordUrlResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Acid, acid_);
      DARABONBA_PTR_FROM_JSON(OssLink, ossLink_);
    };
    GetRecordUrlResponseBodyData() = default ;
    GetRecordUrlResponseBodyData(const GetRecordUrlResponseBodyData &) = default ;
    GetRecordUrlResponseBodyData(GetRecordUrlResponseBodyData &&) = default ;
    GetRecordUrlResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRecordUrlResponseBodyData() = default ;
    GetRecordUrlResponseBodyData& operator=(const GetRecordUrlResponseBodyData &) = default ;
    GetRecordUrlResponseBodyData& operator=(GetRecordUrlResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acid_ == nullptr
        && return this->ossLink_ == nullptr; };
    // acid Field Functions 
    bool hasAcid() const { return this->acid_ != nullptr;};
    void deleteAcid() { this->acid_ = nullptr;};
    inline string acid() const { DARABONBA_PTR_GET_DEFAULT(acid_, "") };
    inline GetRecordUrlResponseBodyData& setAcid(string acid) { DARABONBA_PTR_SET_VALUE(acid_, acid) };


    // ossLink Field Functions 
    bool hasOssLink() const { return this->ossLink_ != nullptr;};
    void deleteOssLink() { this->ossLink_ = nullptr;};
    inline string ossLink() const { DARABONBA_PTR_GET_DEFAULT(ossLink_, "") };
    inline GetRecordUrlResponseBodyData& setOssLink(string ossLink) { DARABONBA_PTR_SET_VALUE(ossLink_, ossLink) };


  protected:
    std::shared_ptr<string> acid_ = nullptr;
    std::shared_ptr<string> ossLink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
