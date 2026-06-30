// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWSKILLDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWSKILLDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarClawSkillDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarClawSkillDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Slug, slug_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarClawSkillDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Slug, slug_);
    };
    DescribePolarClawSkillDetailRequest() = default ;
    DescribePolarClawSkillDetailRequest(const DescribePolarClawSkillDetailRequest &) = default ;
    DescribePolarClawSkillDetailRequest(DescribePolarClawSkillDetailRequest &&) = default ;
    DescribePolarClawSkillDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarClawSkillDetailRequest() = default ;
    DescribePolarClawSkillDetailRequest& operator=(const DescribePolarClawSkillDetailRequest &) = default ;
    DescribePolarClawSkillDetailRequest& operator=(DescribePolarClawSkillDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->slug_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribePolarClawSkillDetailRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // slug Field Functions 
    bool hasSlug() const { return this->slug_ != nullptr;};
    void deleteSlug() { this->slug_ = nullptr;};
    inline string getSlug() const { DARABONBA_PTR_GET_DEFAULT(slug_, "") };
    inline DescribePolarClawSkillDetailRequest& setSlug(string slug) { DARABONBA_PTR_SET_VALUE(slug_, slug) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // The Skill identifier.
    // 
    // This parameter is required.
    shared_ptr<string> slug_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
