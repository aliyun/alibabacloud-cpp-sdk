// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASOURCERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETDATASOURCERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetDataSourceResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataSourceResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(indexes, indexes_);
      DARABONBA_PTR_TO_JSON(lastFulTime, lastFulTime_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataSourceResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(indexes, indexes_);
      DARABONBA_PTR_FROM_JSON(lastFulTime, lastFulTime_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetDataSourceResponseBodyResult() = default ;
    GetDataSourceResponseBodyResult(const GetDataSourceResponseBodyResult &) = default ;
    GetDataSourceResponseBodyResult(GetDataSourceResponseBodyResult &&) = default ;
    GetDataSourceResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataSourceResponseBodyResult() = default ;
    GetDataSourceResponseBodyResult& operator=(const GetDataSourceResponseBodyResult &) = default ;
    GetDataSourceResponseBodyResult& operator=(GetDataSourceResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->indexes_ != nullptr && this->lastFulTime_ != nullptr && this->name_ != nullptr && this->status_ != nullptr && this->type_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline GetDataSourceResponseBodyResult& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // indexes Field Functions 
    bool hasIndexes() const { return this->indexes_ != nullptr;};
    void deleteIndexes() { this->indexes_ = nullptr;};
    inline const vector<string> & indexes() const { DARABONBA_PTR_GET_CONST(indexes_, vector<string>) };
    inline vector<string> indexes() { DARABONBA_PTR_GET(indexes_, vector<string>) };
    inline GetDataSourceResponseBodyResult& setIndexes(const vector<string> & indexes) { DARABONBA_PTR_SET_VALUE(indexes_, indexes) };
    inline GetDataSourceResponseBodyResult& setIndexes(vector<string> && indexes) { DARABONBA_PTR_SET_RVALUE(indexes_, indexes) };


    // lastFulTime Field Functions 
    bool hasLastFulTime() const { return this->lastFulTime_ != nullptr;};
    void deleteLastFulTime() { this->lastFulTime_ = nullptr;};
    inline int64_t lastFulTime() const { DARABONBA_PTR_GET_DEFAULT(lastFulTime_, 0L) };
    inline GetDataSourceResponseBodyResult& setLastFulTime(int64_t lastFulTime) { DARABONBA_PTR_SET_VALUE(lastFulTime_, lastFulTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDataSourceResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDataSourceResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetDataSourceResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The data center where the data source is deployed in offline mode
    std::shared_ptr<string> domain_ = nullptr;
    // The list of index information
    std::shared_ptr<vector<string>> indexes_ = nullptr;
    // The time when the full data of the data source was last queried.
    std::shared_ptr<int64_t> lastFulTime_ = nullptr;
    // The name of the data source.
    std::shared_ptr<string> name_ = nullptr;
    // The status of the data source. Valid values: new: The data source is being created. publish: The data source is in the normal state. trash: The data source is being deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the data source
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
