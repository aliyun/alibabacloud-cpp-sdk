// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISPOSESTRATEGYPLAYBOOKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISPOSESTRATEGYPLAYBOOKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeDisposeStrategyPlaybookResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisposeStrategyPlaybookResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PlaybookName, playbookName_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisposeStrategyPlaybookResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PlaybookName, playbookName_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
    };
    DescribeDisposeStrategyPlaybookResponseBodyData() = default ;
    DescribeDisposeStrategyPlaybookResponseBodyData(const DescribeDisposeStrategyPlaybookResponseBodyData &) = default ;
    DescribeDisposeStrategyPlaybookResponseBodyData(DescribeDisposeStrategyPlaybookResponseBodyData &&) = default ;
    DescribeDisposeStrategyPlaybookResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisposeStrategyPlaybookResponseBodyData() = default ;
    DescribeDisposeStrategyPlaybookResponseBodyData& operator=(const DescribeDisposeStrategyPlaybookResponseBodyData &) = default ;
    DescribeDisposeStrategyPlaybookResponseBodyData& operator=(DescribeDisposeStrategyPlaybookResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->playbookName_ != nullptr
        && this->playbookUuid_ != nullptr; };
    // playbookName Field Functions 
    bool hasPlaybookName() const { return this->playbookName_ != nullptr;};
    void deletePlaybookName() { this->playbookName_ = nullptr;};
    inline string playbookName() const { DARABONBA_PTR_GET_DEFAULT(playbookName_, "") };
    inline DescribeDisposeStrategyPlaybookResponseBodyData& setPlaybookName(string playbookName) { DARABONBA_PTR_SET_VALUE(playbookName_, playbookName) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string playbookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline DescribeDisposeStrategyPlaybookResponseBodyData& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


  protected:
    // The playbook name, which is the unique identifier of the playbook.
    std::shared_ptr<string> playbookName_ = nullptr;
    // The UUID of the playbook.
    std::shared_ptr<string> playbookUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
