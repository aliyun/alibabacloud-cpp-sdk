// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBADSQLDETECTIONRESPONSEBODYDETECTIONITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBADSQLDETECTIONRESPONSEBODYDETECTIONITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBadSqlDetectionResponseBodyDetectionItemsResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeBadSqlDetectionResponseBodyDetectionItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBadSqlDetectionResponseBodyDetectionItems& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBadSqlDetectionResponseBodyDetectionItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeBadSqlDetectionResponseBodyDetectionItems() = default ;
    DescribeBadSqlDetectionResponseBodyDetectionItems(const DescribeBadSqlDetectionResponseBodyDetectionItems &) = default ;
    DescribeBadSqlDetectionResponseBodyDetectionItems(DescribeBadSqlDetectionResponseBodyDetectionItems &&) = default ;
    DescribeBadSqlDetectionResponseBodyDetectionItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBadSqlDetectionResponseBodyDetectionItems() = default ;
    DescribeBadSqlDetectionResponseBodyDetectionItems& operator=(const DescribeBadSqlDetectionResponseBodyDetectionItems &) = default ;
    DescribeBadSqlDetectionResponseBodyDetectionItems& operator=(DescribeBadSqlDetectionResponseBodyDetectionItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->name_ != nullptr && this->results_ != nullptr && this->status_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeBadSqlDetectionResponseBodyDetectionItems& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeBadSqlDetectionResponseBodyDetectionItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Models::DescribeBadSqlDetectionResponseBodyDetectionItemsResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<Models::DescribeBadSqlDetectionResponseBodyDetectionItemsResults>) };
    inline vector<Models::DescribeBadSqlDetectionResponseBodyDetectionItemsResults> results() { DARABONBA_PTR_GET(results_, vector<Models::DescribeBadSqlDetectionResponseBodyDetectionItemsResults>) };
    inline DescribeBadSqlDetectionResponseBodyDetectionItems& setResults(const vector<Models::DescribeBadSqlDetectionResponseBodyDetectionItemsResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline DescribeBadSqlDetectionResponseBodyDetectionItems& setResults(vector<Models::DescribeBadSqlDetectionResponseBodyDetectionItemsResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeBadSqlDetectionResponseBodyDetectionItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The information about the diagnostic result.
    std::shared_ptr<string> message_ = nullptr;
    // The name of the detection item.
    std::shared_ptr<string> name_ = nullptr;
    // The detection result items.
    std::shared_ptr<vector<Models::DescribeBadSqlDetectionResponseBodyDetectionItemsResults>> results_ = nullptr;
    // The severity level of the detection result. Valid values:
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
