// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETIMINGSYNTHETICTASKREQUESTMONITORCONFAPIHTTPREQUESTBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATETIMINGSYNTHETICTASKREQUESTMONITORCONFAPIHTTPREQUESTBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateTimingSyntheticTaskRequestMonitorConfApiHTTPRequestBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTimingSyntheticTaskRequestMonitorConfApiHTTPRequestBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTimingSyntheticTaskRequestMonitorConfApiHTTPRequestBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateTimingSyntheticTaskRequestMonitorConfApiHTTPRequestBody() = default ;
    UpdateTimingSyntheticTaskRequestMonitorConfApiHTTPRequestBody(const UpdateTimingSyntheticTaskRequestMonitorConfApiHTTPRequestBody &) = default ;
    UpdateTimingSyntheticTaskRequestMonitorConfApiHTTPRequestBody(UpdateTimingSyntheticTaskRequestMonitorConfApiHTTPRequestBody &&) = default ;
    UpdateTimingSyntheticTaskRequestMonitorConfApiHTTPRequestBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTimingSyntheticTaskRequestMonitorConfApiHTTPRequestBody() = default ;
    UpdateTimingSyntheticTaskRequestMonitorConfApiHTTPRequestBody& operator=(const UpdateTimingSyntheticTaskRequestMonitorConfApiHTTPRequestBody &) = default ;
    UpdateTimingSyntheticTaskRequestMonitorConfApiHTTPRequestBody& operator=(UpdateTimingSyntheticTaskRequestMonitorConfApiHTTPRequestBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->type_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateTimingSyntheticTaskRequestMonitorConfApiHTTPRequestBody& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateTimingSyntheticTaskRequestMonitorConfApiHTTPRequestBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The content of the request body. Format: JSON string. The parameter is required if the Type parameter is set to text/plain, application/json, application/xml, or text/html. Format: JSON string.
    std::shared_ptr<string> content_ = nullptr;
    // The type of the request body. Valid values: text/plain, application/json, application/x-www-form-urlencoded, multipart/form-data, application/xml, and text/html.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
