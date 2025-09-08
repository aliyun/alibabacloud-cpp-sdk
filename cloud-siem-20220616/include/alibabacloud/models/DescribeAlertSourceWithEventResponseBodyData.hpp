// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTSOURCEWITHEVENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTSOURCEWITHEVENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeAlertSourceWithEventResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertSourceWithEventResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceName, sourceName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertSourceWithEventResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceName, sourceName_);
    };
    DescribeAlertSourceWithEventResponseBodyData() = default ;
    DescribeAlertSourceWithEventResponseBodyData(const DescribeAlertSourceWithEventResponseBodyData &) = default ;
    DescribeAlertSourceWithEventResponseBodyData(DescribeAlertSourceWithEventResponseBodyData &&) = default ;
    DescribeAlertSourceWithEventResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertSourceWithEventResponseBodyData() = default ;
    DescribeAlertSourceWithEventResponseBodyData& operator=(const DescribeAlertSourceWithEventResponseBodyData &) = default ;
    DescribeAlertSourceWithEventResponseBodyData& operator=(DescribeAlertSourceWithEventResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->source_ != nullptr
        && this->sourceName_ != nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeAlertSourceWithEventResponseBodyData& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceName Field Functions 
    bool hasSourceName() const { return this->sourceName_ != nullptr;};
    void deleteSourceName() { this->sourceName_ = nullptr;};
    inline string sourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
    inline DescribeAlertSourceWithEventResponseBodyData& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


  protected:
    // The internal code of the alert data source.
    std::shared_ptr<string> source_ = nullptr;
    // The name of the alert data source.
    std::shared_ptr<string> sourceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
