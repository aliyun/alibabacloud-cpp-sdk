// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSTATUSRESPONSEBODYPRECHECKSTATUSDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSTATUSRESPONSEBODYPRECHECKSTATUSDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMigrationJobStatusResponseBodyPrecheckStatusDetailCheckItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail& obj) { 
      DARABONBA_PTR_TO_JSON(CheckItem, checkItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckItem, checkItem_);
    };
    DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail() = default ;
    DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail(const DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail &) = default ;
    DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail(DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail &&) = default ;
    DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail() = default ;
    DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail& operator=(const DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail &) = default ;
    DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail& operator=(DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkItem_ != nullptr; };
    // checkItem Field Functions 
    bool hasCheckItem() const { return this->checkItem_ != nullptr;};
    void deleteCheckItem() { this->checkItem_ = nullptr;};
    inline const vector<Models::DescribeMigrationJobStatusResponseBodyPrecheckStatusDetailCheckItem> & checkItem() const { DARABONBA_PTR_GET_CONST(checkItem_, vector<Models::DescribeMigrationJobStatusResponseBodyPrecheckStatusDetailCheckItem>) };
    inline vector<Models::DescribeMigrationJobStatusResponseBodyPrecheckStatusDetailCheckItem> checkItem() { DARABONBA_PTR_GET(checkItem_, vector<Models::DescribeMigrationJobStatusResponseBodyPrecheckStatusDetailCheckItem>) };
    inline DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail& setCheckItem(const vector<Models::DescribeMigrationJobStatusResponseBodyPrecheckStatusDetailCheckItem> & checkItem) { DARABONBA_PTR_SET_VALUE(checkItem_, checkItem) };
    inline DescribeMigrationJobStatusResponseBodyPrecheckStatusDetail& setCheckItem(vector<Models::DescribeMigrationJobStatusResponseBodyPrecheckStatusDetailCheckItem> && checkItem) { DARABONBA_PTR_SET_RVALUE(checkItem_, checkItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeMigrationJobStatusResponseBodyPrecheckStatusDetailCheckItem>> checkItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
