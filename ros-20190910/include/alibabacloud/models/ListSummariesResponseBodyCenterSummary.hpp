// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUMMARIESRESPONSEBODYCENTERSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUMMARIESRESPONSEBODYCENTERSUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListSummariesResponseBodyCenterSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSummariesResponseBodyCenterSummary& obj) { 
      DARABONBA_PTR_TO_JSON(RegisteredResourceTypeCount, registeredResourceTypeCount_);
      DARABONBA_PTR_TO_JSON(TemplateCount, templateCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSummariesResponseBodyCenterSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(RegisteredResourceTypeCount, registeredResourceTypeCount_);
      DARABONBA_PTR_FROM_JSON(TemplateCount, templateCount_);
    };
    ListSummariesResponseBodyCenterSummary() = default ;
    ListSummariesResponseBodyCenterSummary(const ListSummariesResponseBodyCenterSummary &) = default ;
    ListSummariesResponseBodyCenterSummary(ListSummariesResponseBodyCenterSummary &&) = default ;
    ListSummariesResponseBodyCenterSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSummariesResponseBodyCenterSummary() = default ;
    ListSummariesResponseBodyCenterSummary& operator=(const ListSummariesResponseBodyCenterSummary &) = default ;
    ListSummariesResponseBodyCenterSummary& operator=(ListSummariesResponseBodyCenterSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->registeredResourceTypeCount_ == nullptr
        && return this->templateCount_ == nullptr; };
    // registeredResourceTypeCount Field Functions 
    bool hasRegisteredResourceTypeCount() const { return this->registeredResourceTypeCount_ != nullptr;};
    void deleteRegisteredResourceTypeCount() { this->registeredResourceTypeCount_ = nullptr;};
    inline int32_t registeredResourceTypeCount() const { DARABONBA_PTR_GET_DEFAULT(registeredResourceTypeCount_, 0) };
    inline ListSummariesResponseBodyCenterSummary& setRegisteredResourceTypeCount(int32_t registeredResourceTypeCount) { DARABONBA_PTR_SET_VALUE(registeredResourceTypeCount_, registeredResourceTypeCount) };


    // templateCount Field Functions 
    bool hasTemplateCount() const { return this->templateCount_ != nullptr;};
    void deleteTemplateCount() { this->templateCount_ = nullptr;};
    inline string templateCount() const { DARABONBA_PTR_GET_DEFAULT(templateCount_, "") };
    inline ListSummariesResponseBodyCenterSummary& setTemplateCount(string templateCount) { DARABONBA_PTR_SET_VALUE(templateCount_, templateCount) };


  protected:
    std::shared_ptr<int32_t> registeredResourceTypeCount_ = nullptr;
    std::shared_ptr<string> templateCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
