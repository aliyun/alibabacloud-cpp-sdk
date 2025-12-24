// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENODEPARAMTAGSRESPONSEBODYPARAMREFERREDPATHS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENODEPARAMTAGSRESPONSEBODYPARAMREFERREDPATHS_HPP_
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
  class DescribeNodeParamTagsResponseBodyParamReferredPaths : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNodeParamTagsResponseBodyParamReferredPaths& obj) { 
      DARABONBA_PTR_TO_JSON(ParamName, paramName_);
      DARABONBA_PTR_TO_JSON(ReferredPath, referredPath_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNodeParamTagsResponseBodyParamReferredPaths& obj) { 
      DARABONBA_PTR_FROM_JSON(ParamName, paramName_);
      DARABONBA_PTR_FROM_JSON(ReferredPath, referredPath_);
    };
    DescribeNodeParamTagsResponseBodyParamReferredPaths() = default ;
    DescribeNodeParamTagsResponseBodyParamReferredPaths(const DescribeNodeParamTagsResponseBodyParamReferredPaths &) = default ;
    DescribeNodeParamTagsResponseBodyParamReferredPaths(DescribeNodeParamTagsResponseBodyParamReferredPaths &&) = default ;
    DescribeNodeParamTagsResponseBodyParamReferredPaths(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNodeParamTagsResponseBodyParamReferredPaths() = default ;
    DescribeNodeParamTagsResponseBodyParamReferredPaths& operator=(const DescribeNodeParamTagsResponseBodyParamReferredPaths &) = default ;
    DescribeNodeParamTagsResponseBodyParamReferredPaths& operator=(DescribeNodeParamTagsResponseBodyParamReferredPaths &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->paramName_ == nullptr
        && return this->referredPath_ == nullptr; };
    // paramName Field Functions 
    bool hasParamName() const { return this->paramName_ != nullptr;};
    void deleteParamName() { this->paramName_ = nullptr;};
    inline string paramName() const { DARABONBA_PTR_GET_DEFAULT(paramName_, "") };
    inline DescribeNodeParamTagsResponseBodyParamReferredPaths& setParamName(string paramName) { DARABONBA_PTR_SET_VALUE(paramName_, paramName) };


    // referredPath Field Functions 
    bool hasReferredPath() const { return this->referredPath_ != nullptr;};
    void deleteReferredPath() { this->referredPath_ = nullptr;};
    inline const vector<string> & referredPath() const { DARABONBA_PTR_GET_CONST(referredPath_, vector<string>) };
    inline vector<string> referredPath() { DARABONBA_PTR_GET(referredPath_, vector<string>) };
    inline DescribeNodeParamTagsResponseBodyParamReferredPaths& setReferredPath(const vector<string> & referredPath) { DARABONBA_PTR_SET_VALUE(referredPath_, referredPath) };
    inline DescribeNodeParamTagsResponseBodyParamReferredPaths& setReferredPath(vector<string> && referredPath) { DARABONBA_PTR_SET_RVALUE(referredPath_, referredPath) };


  protected:
    // The name of the upstream node.
    std::shared_ptr<string> paramName_ = nullptr;
    // The paths.
    std::shared_ptr<vector<string>> referredPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
