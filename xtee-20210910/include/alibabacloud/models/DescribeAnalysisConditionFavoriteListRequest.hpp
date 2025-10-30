// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANALYSISCONDITIONFAVORITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANALYSISCONDITIONFAVORITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeAnalysisConditionFavoriteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAnalysisConditionFavoriteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAnalysisConditionFavoriteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    DescribeAnalysisConditionFavoriteListRequest() = default ;
    DescribeAnalysisConditionFavoriteListRequest(const DescribeAnalysisConditionFavoriteListRequest &) = default ;
    DescribeAnalysisConditionFavoriteListRequest(DescribeAnalysisConditionFavoriteListRequest &&) = default ;
    DescribeAnalysisConditionFavoriteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAnalysisConditionFavoriteListRequest() = default ;
    DescribeAnalysisConditionFavoriteListRequest& operator=(const DescribeAnalysisConditionFavoriteListRequest &) = default ;
    DescribeAnalysisConditionFavoriteListRequest& operator=(DescribeAnalysisConditionFavoriteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->regId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeAnalysisConditionFavoriteListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeAnalysisConditionFavoriteListRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Region code
    // 
    // This parameter is required.
    std::shared_ptr<string> regId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
