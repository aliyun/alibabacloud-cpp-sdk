// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECOMMENDSCENEVARIABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECOMMENDSCENEVARIABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRecommendSceneVariablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecommendSceneVariablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(sampleId, sampleId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecommendSceneVariablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(sampleId, sampleId_);
    };
    DescribeRecommendSceneVariablesRequest() = default ;
    DescribeRecommendSceneVariablesRequest(const DescribeRecommendSceneVariablesRequest &) = default ;
    DescribeRecommendSceneVariablesRequest(DescribeRecommendSceneVariablesRequest &&) = default ;
    DescribeRecommendSceneVariablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecommendSceneVariablesRequest() = default ;
    DescribeRecommendSceneVariablesRequest& operator=(const DescribeRecommendSceneVariablesRequest &) = default ;
    DescribeRecommendSceneVariablesRequest& operator=(DescribeRecommendSceneVariablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->regId_ != nullptr && this->sampleId_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeRecommendSceneVariablesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeRecommendSceneVariablesRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // sampleId Field Functions 
    bool hasSampleId() const { return this->sampleId_ != nullptr;};
    void deleteSampleId() { this->sampleId_ = nullptr;};
    inline int64_t sampleId() const { DARABONBA_PTR_GET_DEFAULT(sampleId_, 0L) };
    inline DescribeRecommendSceneVariablesRequest& setSampleId(int64_t sampleId) { DARABONBA_PTR_SET_VALUE(sampleId_, sampleId) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Region Code
    std::shared_ptr<string> regId_ = nullptr;
    // Sample ID
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> sampleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
