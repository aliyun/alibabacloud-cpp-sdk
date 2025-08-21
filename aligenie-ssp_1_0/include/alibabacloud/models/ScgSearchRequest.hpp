// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCGSEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCGSEARCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ScgSearchRequestScgFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ScgSearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScgSearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ScgFilter, scgFilter_);
      DARABONBA_PTR_TO_JSON(TopicId, topicId_);
    };
    friend void from_json(const Darabonba::Json& j, ScgSearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ScgFilter, scgFilter_);
      DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
    };
    ScgSearchRequest() = default ;
    ScgSearchRequest(const ScgSearchRequest &) = default ;
    ScgSearchRequest(ScgSearchRequest &&) = default ;
    ScgSearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScgSearchRequest() = default ;
    ScgSearchRequest& operator=(const ScgSearchRequest &) = default ;
    ScgSearchRequest& operator=(ScgSearchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->scgFilter_ != nullptr
        && this->topicId_ != nullptr; };
    // scgFilter Field Functions 
    bool hasScgFilter() const { return this->scgFilter_ != nullptr;};
    void deleteScgFilter() { this->scgFilter_ = nullptr;};
    inline const ScgSearchRequestScgFilter & scgFilter() const { DARABONBA_PTR_GET_CONST(scgFilter_, ScgSearchRequestScgFilter) };
    inline ScgSearchRequestScgFilter scgFilter() { DARABONBA_PTR_GET(scgFilter_, ScgSearchRequestScgFilter) };
    inline ScgSearchRequest& setScgFilter(const ScgSearchRequestScgFilter & scgFilter) { DARABONBA_PTR_SET_VALUE(scgFilter_, scgFilter) };
    inline ScgSearchRequest& setScgFilter(ScgSearchRequestScgFilter && scgFilter) { DARABONBA_PTR_SET_RVALUE(scgFilter_, scgFilter) };


    // topicId Field Functions 
    bool hasTopicId() const { return this->topicId_ != nullptr;};
    void deleteTopicId() { this->topicId_ = nullptr;};
    inline string topicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, "") };
    inline ScgSearchRequest& setTopicId(string topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


  protected:
    // This parameter is required.
    std::shared_ptr<ScgSearchRequestScgFilter> scgFilter_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> topicId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
