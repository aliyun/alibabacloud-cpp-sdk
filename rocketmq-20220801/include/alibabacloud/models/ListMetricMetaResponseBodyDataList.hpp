// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETRICMETARESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMETRICMETARESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListMetricMetaResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMetricMetaResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(metricName, metricName_);
    };
    friend void from_json(const Darabonba::Json& j, ListMetricMetaResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(metricName, metricName_);
    };
    ListMetricMetaResponseBodyDataList() = default ;
    ListMetricMetaResponseBodyDataList(const ListMetricMetaResponseBodyDataList &) = default ;
    ListMetricMetaResponseBodyDataList(ListMetricMetaResponseBodyDataList &&) = default ;
    ListMetricMetaResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMetricMetaResponseBodyDataList() = default ;
    ListMetricMetaResponseBodyDataList& operator=(const ListMetricMetaResponseBodyDataList &) = default ;
    ListMetricMetaResponseBodyDataList& operator=(ListMetricMetaResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->description_ != nullptr && this->metricName_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListMetricMetaResponseBodyDataList& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListMetricMetaResponseBodyDataList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline ListMetricMetaResponseBodyDataList& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


  protected:
    // Monitoring item tag
    std::shared_ptr<string> category_ = nullptr;
    // Monitoring item description
    std::shared_ptr<string> description_ = nullptr;
    // Monitoring item name
    std::shared_ptr<string> metricName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
