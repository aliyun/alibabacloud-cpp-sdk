// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADDONMETRICSRESPONSEBODYDATAMETRICSLABELS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADDONMETRICSRESPONSEBODYDATAMETRICSLABELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeAddonMetricsResponseBodyDataMetricsLabels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAddonMetricsResponseBodyDataMetricsLabels& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAddonMetricsResponseBodyDataMetricsLabels& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    DescribeAddonMetricsResponseBodyDataMetricsLabels() = default ;
    DescribeAddonMetricsResponseBodyDataMetricsLabels(const DescribeAddonMetricsResponseBodyDataMetricsLabels &) = default ;
    DescribeAddonMetricsResponseBodyDataMetricsLabels(DescribeAddonMetricsResponseBodyDataMetricsLabels &&) = default ;
    DescribeAddonMetricsResponseBodyDataMetricsLabels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAddonMetricsResponseBodyDataMetricsLabels() = default ;
    DescribeAddonMetricsResponseBodyDataMetricsLabels& operator=(const DescribeAddonMetricsResponseBodyDataMetricsLabels &) = default ;
    DescribeAddonMetricsResponseBodyDataMetricsLabels& operator=(DescribeAddonMetricsResponseBodyDataMetricsLabels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->key_ != nullptr && this->source_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAddonMetricsResponseBodyDataMetricsLabels& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeAddonMetricsResponseBodyDataMetricsLabels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeAddonMetricsResponseBodyDataMetricsLabels& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The description of the tag.
    std::shared_ptr<string> description_ = nullptr;
    // The tag key.
    std::shared_ptr<string> key_ = nullptr;
    // The source of the tag.
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
