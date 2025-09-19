// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEUPLOADLIMITRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETFILEUPLOADLIMITRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetFileUploadLimitResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileUploadLimitResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Limit, limit_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileUploadLimitResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
    };
    GetFileUploadLimitResponseBodyData() = default ;
    GetFileUploadLimitResponseBodyData(const GetFileUploadLimitResponseBodyData &) = default ;
    GetFileUploadLimitResponseBodyData(GetFileUploadLimitResponseBodyData &&) = default ;
    GetFileUploadLimitResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileUploadLimitResponseBodyData() = default ;
    GetFileUploadLimitResponseBodyData& operator=(const GetFileUploadLimitResponseBodyData &) = default ;
    GetFileUploadLimitResponseBodyData& operator=(GetFileUploadLimitResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->limit_ != nullptr; };
    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline string limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, "") };
    inline GetFileUploadLimitResponseBodyData& setLimit(string limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


  protected:
    // The QPS limit on the files uploaded from the client.
    std::shared_ptr<string> limit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
