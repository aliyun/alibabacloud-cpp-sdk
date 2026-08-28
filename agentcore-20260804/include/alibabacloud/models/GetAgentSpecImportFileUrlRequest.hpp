// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTSPECIMPORTFILEURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTSPECIMPORTFILEURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetAgentSpecImportFileUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentSpecImportFileUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(contentType, contentType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentSpecImportFileUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(contentType, contentType_);
    };
    GetAgentSpecImportFileUrlRequest() = default ;
    GetAgentSpecImportFileUrlRequest(const GetAgentSpecImportFileUrlRequest &) = default ;
    GetAgentSpecImportFileUrlRequest(GetAgentSpecImportFileUrlRequest &&) = default ;
    GetAgentSpecImportFileUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentSpecImportFileUrlRequest() = default ;
    GetAgentSpecImportFileUrlRequest& operator=(const GetAgentSpecImportFileUrlRequest &) = default ;
    GetAgentSpecImportFileUrlRequest& operator=(GetAgentSpecImportFileUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentType_ == nullptr; };
    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline GetAgentSpecImportFileUrlRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


  protected:
    // The Content-Type of the file to upload. The client must use the same value from the response when performing the PUT request.
    shared_ptr<string> contentType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
