// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIACONNECTAVAILABLEREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIACONNECTAVAILABLEREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaConnectAvailableRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaConnectAvailableRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RetCode, retCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaConnectAvailableRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RetCode, retCode_);
    };
    GetMediaConnectAvailableRegionResponseBody() = default ;
    GetMediaConnectAvailableRegionResponseBody(const GetMediaConnectAvailableRegionResponseBody &) = default ;
    GetMediaConnectAvailableRegionResponseBody(GetMediaConnectAvailableRegionResponseBody &&) = default ;
    GetMediaConnectAvailableRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaConnectAvailableRegionResponseBody() = default ;
    GetMediaConnectAvailableRegionResponseBody& operator=(const GetMediaConnectAvailableRegionResponseBody &) = default ;
    GetMediaConnectAvailableRegionResponseBody& operator=(GetMediaConnectAvailableRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(DefaultRegion, defaultRegion_);
        DARABONBA_PTR_TO_JSON(RegionList, regionList_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(DefaultRegion, defaultRegion_);
        DARABONBA_PTR_FROM_JSON(RegionList, regionList_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->defaultRegion_ == nullptr
        && this->regionList_ == nullptr; };
      // defaultRegion Field Functions 
      bool hasDefaultRegion() const { return this->defaultRegion_ != nullptr;};
      void deleteDefaultRegion() { this->defaultRegion_ = nullptr;};
      inline string getDefaultRegion() const { DARABONBA_PTR_GET_DEFAULT(defaultRegion_, "") };
      inline Content& setDefaultRegion(string defaultRegion) { DARABONBA_PTR_SET_VALUE(defaultRegion_, defaultRegion) };


      // regionList Field Functions 
      bool hasRegionList() const { return this->regionList_ != nullptr;};
      void deleteRegionList() { this->regionList_ = nullptr;};
      inline const vector<string> & getRegionList() const { DARABONBA_PTR_GET_CONST(regionList_, vector<string>) };
      inline vector<string> getRegionList() { DARABONBA_PTR_GET(regionList_, vector<string>) };
      inline Content& setRegionList(const vector<string> & regionList) { DARABONBA_PTR_SET_VALUE(regionList_, regionList) };
      inline Content& setRegionList(vector<string> && regionList) { DARABONBA_PTR_SET_RVALUE(regionList_, regionList) };


    protected:
      // The default region. You can ignore the parameter.
      shared_ptr<string> defaultRegion_ {};
      // The supported regions.
      shared_ptr<vector<string>> regionList_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->description_ == nullptr && this->requestId_ == nullptr && this->retCode_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const GetMediaConnectAvailableRegionResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, GetMediaConnectAvailableRegionResponseBody::Content) };
    inline GetMediaConnectAvailableRegionResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, GetMediaConnectAvailableRegionResponseBody::Content) };
    inline GetMediaConnectAvailableRegionResponseBody& setContent(const GetMediaConnectAvailableRegionResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline GetMediaConnectAvailableRegionResponseBody& setContent(GetMediaConnectAvailableRegionResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetMediaConnectAvailableRegionResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaConnectAvailableRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retCode Field Functions 
    bool hasRetCode() const { return this->retCode_ != nullptr;};
    void deleteRetCode() { this->retCode_ = nullptr;};
    inline int32_t getRetCode() const { DARABONBA_PTR_GET_DEFAULT(retCode_, 0) };
    inline GetMediaConnectAvailableRegionResponseBody& setRetCode(int32_t retCode) { DARABONBA_PTR_SET_VALUE(retCode_, retCode) };


  protected:
    // The rsponse body.
    shared_ptr<GetMediaConnectAvailableRegionResponseBody::Content> content_ {};
    // The call description.
    shared_ptr<string> description_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned error code. A value of 0 indicates the call is successful.
    shared_ptr<int32_t> retCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
