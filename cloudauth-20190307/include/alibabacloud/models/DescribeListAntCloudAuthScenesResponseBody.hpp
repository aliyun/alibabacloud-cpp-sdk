// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELISTANTCLOUDAUTHSCENESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELISTANTCLOUDAUTHSCENESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeListAntCloudAuthScenesResponseBodyScenes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeListAntCloudAuthScenesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeListAntCloudAuthScenesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Scenes, scenes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeListAntCloudAuthScenesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Scenes, scenes_);
    };
    DescribeListAntCloudAuthScenesResponseBody() = default ;
    DescribeListAntCloudAuthScenesResponseBody(const DescribeListAntCloudAuthScenesResponseBody &) = default ;
    DescribeListAntCloudAuthScenesResponseBody(DescribeListAntCloudAuthScenesResponseBody &&) = default ;
    DescribeListAntCloudAuthScenesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeListAntCloudAuthScenesResponseBody() = default ;
    DescribeListAntCloudAuthScenesResponseBody& operator=(const DescribeListAntCloudAuthScenesResponseBody &) = default ;
    DescribeListAntCloudAuthScenesResponseBody& operator=(DescribeListAntCloudAuthScenesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->scenes_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeListAntCloudAuthScenesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scenes Field Functions 
    bool hasScenes() const { return this->scenes_ != nullptr;};
    void deleteScenes() { this->scenes_ = nullptr;};
    inline const vector<DescribeListAntCloudAuthScenesResponseBodyScenes> & scenes() const { DARABONBA_PTR_GET_CONST(scenes_, vector<DescribeListAntCloudAuthScenesResponseBodyScenes>) };
    inline vector<DescribeListAntCloudAuthScenesResponseBodyScenes> scenes() { DARABONBA_PTR_GET(scenes_, vector<DescribeListAntCloudAuthScenesResponseBodyScenes>) };
    inline DescribeListAntCloudAuthScenesResponseBody& setScenes(const vector<DescribeListAntCloudAuthScenesResponseBodyScenes> & scenes) { DARABONBA_PTR_SET_VALUE(scenes_, scenes) };
    inline DescribeListAntCloudAuthScenesResponseBody& setScenes(vector<DescribeListAntCloudAuthScenesResponseBodyScenes> && scenes) { DARABONBA_PTR_SET_RVALUE(scenes_, scenes) };


  protected:
    // ID of this request.
    std::shared_ptr<string> requestId_ = nullptr;
    // List of scenarios.
    std::shared_ptr<vector<DescribeListAntCloudAuthScenesResponseBodyScenes>> scenes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
