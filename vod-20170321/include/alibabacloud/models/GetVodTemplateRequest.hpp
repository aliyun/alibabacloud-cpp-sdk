// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVODTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVODTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetVodTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVodTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VodTemplateId, vodTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVodTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VodTemplateId, vodTemplateId_);
    };
    GetVodTemplateRequest() = default ;
    GetVodTemplateRequest(const GetVodTemplateRequest &) = default ;
    GetVodTemplateRequest(GetVodTemplateRequest &&) = default ;
    GetVodTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVodTemplateRequest() = default ;
    GetVodTemplateRequest& operator=(const GetVodTemplateRequest &) = default ;
    GetVodTemplateRequest& operator=(GetVodTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vodTemplateId_ == nullptr; };
    // vodTemplateId Field Functions 
    bool hasVodTemplateId() const { return this->vodTemplateId_ != nullptr;};
    void deleteVodTemplateId() { this->vodTemplateId_ = nullptr;};
    inline string getVodTemplateId() const { DARABONBA_PTR_GET_DEFAULT(vodTemplateId_, "") };
    inline GetVodTemplateRequest& setVodTemplateId(string vodTemplateId) { DARABONBA_PTR_SET_VALUE(vodTemplateId_, vodTemplateId) };


  protected:
    // The ID of the snapshot template.
    // 
    // This parameter is required.
    shared_ptr<string> vodTemplateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
