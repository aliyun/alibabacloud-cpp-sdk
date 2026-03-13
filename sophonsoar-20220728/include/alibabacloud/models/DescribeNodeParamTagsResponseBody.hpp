// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENODEPARAMTAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENODEPARAMTAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeNodeParamTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNodeParamTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ParamReferredPaths, paramReferredPaths_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNodeParamTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ParamReferredPaths, paramReferredPaths_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNodeParamTagsResponseBody() = default ;
    DescribeNodeParamTagsResponseBody(const DescribeNodeParamTagsResponseBody &) = default ;
    DescribeNodeParamTagsResponseBody(DescribeNodeParamTagsResponseBody &&) = default ;
    DescribeNodeParamTagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNodeParamTagsResponseBody() = default ;
    DescribeNodeParamTagsResponseBody& operator=(const DescribeNodeParamTagsResponseBody &) = default ;
    DescribeNodeParamTagsResponseBody& operator=(DescribeNodeParamTagsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ParamReferredPaths : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ParamReferredPaths& obj) { 
        DARABONBA_PTR_TO_JSON(ParamName, paramName_);
        DARABONBA_PTR_TO_JSON(ReferredPath, referredPath_);
      };
      friend void from_json(const Darabonba::Json& j, ParamReferredPaths& obj) { 
        DARABONBA_PTR_FROM_JSON(ParamName, paramName_);
        DARABONBA_PTR_FROM_JSON(ReferredPath, referredPath_);
      };
      ParamReferredPaths() = default ;
      ParamReferredPaths(const ParamReferredPaths &) = default ;
      ParamReferredPaths(ParamReferredPaths &&) = default ;
      ParamReferredPaths(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ParamReferredPaths() = default ;
      ParamReferredPaths& operator=(const ParamReferredPaths &) = default ;
      ParamReferredPaths& operator=(ParamReferredPaths &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->paramName_ == nullptr
        && this->referredPath_ == nullptr; };
      // paramName Field Functions 
      bool hasParamName() const { return this->paramName_ != nullptr;};
      void deleteParamName() { this->paramName_ = nullptr;};
      inline string getParamName() const { DARABONBA_PTR_GET_DEFAULT(paramName_, "") };
      inline ParamReferredPaths& setParamName(string paramName) { DARABONBA_PTR_SET_VALUE(paramName_, paramName) };


      // referredPath Field Functions 
      bool hasReferredPath() const { return this->referredPath_ != nullptr;};
      void deleteReferredPath() { this->referredPath_ = nullptr;};
      inline const vector<string> & getReferredPath() const { DARABONBA_PTR_GET_CONST(referredPath_, vector<string>) };
      inline vector<string> getReferredPath() { DARABONBA_PTR_GET(referredPath_, vector<string>) };
      inline ParamReferredPaths& setReferredPath(const vector<string> & referredPath) { DARABONBA_PTR_SET_VALUE(referredPath_, referredPath) };
      inline ParamReferredPaths& setReferredPath(vector<string> && referredPath) { DARABONBA_PTR_SET_RVALUE(referredPath_, referredPath) };


    protected:
      // The name of the upstream node.
      shared_ptr<string> paramName_ {};
      // The paths.
      shared_ptr<vector<string>> referredPath_ {};
    };

    virtual bool empty() const override { return this->paramReferredPaths_ == nullptr
        && this->requestId_ == nullptr; };
    // paramReferredPaths Field Functions 
    bool hasParamReferredPaths() const { return this->paramReferredPaths_ != nullptr;};
    void deleteParamReferredPaths() { this->paramReferredPaths_ = nullptr;};
    inline const vector<DescribeNodeParamTagsResponseBody::ParamReferredPaths> & getParamReferredPaths() const { DARABONBA_PTR_GET_CONST(paramReferredPaths_, vector<DescribeNodeParamTagsResponseBody::ParamReferredPaths>) };
    inline vector<DescribeNodeParamTagsResponseBody::ParamReferredPaths> getParamReferredPaths() { DARABONBA_PTR_GET(paramReferredPaths_, vector<DescribeNodeParamTagsResponseBody::ParamReferredPaths>) };
    inline DescribeNodeParamTagsResponseBody& setParamReferredPaths(const vector<DescribeNodeParamTagsResponseBody::ParamReferredPaths> & paramReferredPaths) { DARABONBA_PTR_SET_VALUE(paramReferredPaths_, paramReferredPaths) };
    inline DescribeNodeParamTagsResponseBody& setParamReferredPaths(vector<DescribeNodeParamTagsResponseBody::ParamReferredPaths> && paramReferredPaths) { DARABONBA_PTR_SET_RVALUE(paramReferredPaths_, paramReferredPaths) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNodeParamTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration of the recommended path.
    shared_ptr<vector<DescribeNodeParamTagsResponseBody::ParamReferredPaths>> paramReferredPaths_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
