// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMCPSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMCPSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateMcpServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMcpServerRequest& obj) { 
      DARABONBA_ANY_TO_JSON(CustomHeaders, customHeaders_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Transport, transport_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
      DARABONBA_PTR_TO_JSON(VisibilityScope, visibilityScope_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMcpServerRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(CustomHeaders, customHeaders_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Transport, transport_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
      DARABONBA_PTR_FROM_JSON(VisibilityScope, visibilityScope_);
    };
    UpdateMcpServerRequest() = default ;
    UpdateMcpServerRequest(const UpdateMcpServerRequest &) = default ;
    UpdateMcpServerRequest(UpdateMcpServerRequest &&) = default ;
    UpdateMcpServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMcpServerRequest() = default ;
    UpdateMcpServerRequest& operator=(const UpdateMcpServerRequest &) = default ;
    UpdateMcpServerRequest& operator=(UpdateMcpServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VisibilityScope : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VisibilityScope& obj) { 
        DARABONBA_PTR_TO_JSON(ProjectIds, projectIds_);
        DARABONBA_PTR_TO_JSON(UserIds, userIds_);
      };
      friend void from_json(const Darabonba::Json& j, VisibilityScope& obj) { 
        DARABONBA_PTR_FROM_JSON(ProjectIds, projectIds_);
        DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
      };
      VisibilityScope() = default ;
      VisibilityScope(const VisibilityScope &) = default ;
      VisibilityScope(VisibilityScope &&) = default ;
      VisibilityScope(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VisibilityScope() = default ;
      VisibilityScope& operator=(const VisibilityScope &) = default ;
      VisibilityScope& operator=(VisibilityScope &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->projectIds_ == nullptr
        && this->userIds_ == nullptr; };
      // projectIds Field Functions 
      bool hasProjectIds() const { return this->projectIds_ != nullptr;};
      void deleteProjectIds() { this->projectIds_ = nullptr;};
      inline const vector<string> & getProjectIds() const { DARABONBA_PTR_GET_CONST(projectIds_, vector<string>) };
      inline vector<string> getProjectIds() { DARABONBA_PTR_GET(projectIds_, vector<string>) };
      inline VisibilityScope& setProjectIds(const vector<string> & projectIds) { DARABONBA_PTR_SET_VALUE(projectIds_, projectIds) };
      inline VisibilityScope& setProjectIds(vector<string> && projectIds) { DARABONBA_PTR_SET_RVALUE(projectIds_, projectIds) };


      // userIds Field Functions 
      bool hasUserIds() const { return this->userIds_ != nullptr;};
      void deleteUserIds() { this->userIds_ = nullptr;};
      inline const vector<string> & getUserIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
      inline vector<string> getUserIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
      inline VisibilityScope& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
      inline VisibilityScope& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


    protected:
      shared_ptr<vector<string>> projectIds_ {};
      shared_ptr<vector<string>> userIds_ {};
    };

    virtual bool empty() const override { return this->customHeaders_ == nullptr
        && this->name_ == nullptr && this->transport_ == nullptr && this->url_ == nullptr && this->visibility_ == nullptr && this->visibilityScope_ == nullptr; };
    // customHeaders Field Functions 
    bool hasCustomHeaders() const { return this->customHeaders_ != nullptr;};
    void deleteCustomHeaders() { this->customHeaders_ = nullptr;};
    inline     const Darabonba::Json & getCustomHeaders() const { DARABONBA_GET(customHeaders_) };
    Darabonba::Json & getCustomHeaders() { DARABONBA_GET(customHeaders_) };
    inline UpdateMcpServerRequest& setCustomHeaders(const Darabonba::Json & customHeaders) { DARABONBA_SET_VALUE(customHeaders_, customHeaders) };
    inline UpdateMcpServerRequest& setCustomHeaders(Darabonba::Json && customHeaders) { DARABONBA_SET_RVALUE(customHeaders_, customHeaders) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateMcpServerRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // transport Field Functions 
    bool hasTransport() const { return this->transport_ != nullptr;};
    void deleteTransport() { this->transport_ = nullptr;};
    inline string getTransport() const { DARABONBA_PTR_GET_DEFAULT(transport_, "") };
    inline UpdateMcpServerRequest& setTransport(string transport) { DARABONBA_PTR_SET_VALUE(transport_, transport) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline UpdateMcpServerRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline UpdateMcpServerRequest& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


    // visibilityScope Field Functions 
    bool hasVisibilityScope() const { return this->visibilityScope_ != nullptr;};
    void deleteVisibilityScope() { this->visibilityScope_ = nullptr;};
    inline const UpdateMcpServerRequest::VisibilityScope & getVisibilityScope() const { DARABONBA_PTR_GET_CONST(visibilityScope_, UpdateMcpServerRequest::VisibilityScope) };
    inline UpdateMcpServerRequest::VisibilityScope getVisibilityScope() { DARABONBA_PTR_GET(visibilityScope_, UpdateMcpServerRequest::VisibilityScope) };
    inline UpdateMcpServerRequest& setVisibilityScope(const UpdateMcpServerRequest::VisibilityScope & visibilityScope) { DARABONBA_PTR_SET_VALUE(visibilityScope_, visibilityScope) };
    inline UpdateMcpServerRequest& setVisibilityScope(UpdateMcpServerRequest::VisibilityScope && visibilityScope) { DARABONBA_PTR_SET_RVALUE(visibilityScope_, visibilityScope) };


  protected:
    Darabonba::Json customHeaders_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> transport_ {};
    shared_ptr<string> url_ {};
    shared_ptr<string> visibility_ {};
    shared_ptr<UpdateMcpServerRequest::VisibilityScope> visibilityScope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
