// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENGINECONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTENGINECONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEngineConfigsResponseBodyEngineConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListEngineConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEngineConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EngineConfigs, engineConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListEngineConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EngineConfigs, engineConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListEngineConfigsResponseBody() = default ;
    ListEngineConfigsResponseBody(const ListEngineConfigsResponseBody &) = default ;
    ListEngineConfigsResponseBody(ListEngineConfigsResponseBody &&) = default ;
    ListEngineConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEngineConfigsResponseBody() = default ;
    ListEngineConfigsResponseBody& operator=(const ListEngineConfigsResponseBody &) = default ;
    ListEngineConfigsResponseBody& operator=(ListEngineConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->engineConfigs_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // engineConfigs Field Functions 
    bool hasEngineConfigs() const { return this->engineConfigs_ != nullptr;};
    void deleteEngineConfigs() { this->engineConfigs_ = nullptr;};
    inline const vector<ListEngineConfigsResponseBodyEngineConfigs> & engineConfigs() const { DARABONBA_PTR_GET_CONST(engineConfigs_, vector<ListEngineConfigsResponseBodyEngineConfigs>) };
    inline vector<ListEngineConfigsResponseBodyEngineConfigs> engineConfigs() { DARABONBA_PTR_GET(engineConfigs_, vector<ListEngineConfigsResponseBodyEngineConfigs>) };
    inline ListEngineConfigsResponseBody& setEngineConfigs(const vector<ListEngineConfigsResponseBodyEngineConfigs> & engineConfigs) { DARABONBA_PTR_SET_VALUE(engineConfigs_, engineConfigs) };
    inline ListEngineConfigsResponseBody& setEngineConfigs(vector<ListEngineConfigsResponseBodyEngineConfigs> && engineConfigs) { DARABONBA_PTR_SET_RVALUE(engineConfigs_, engineConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEngineConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListEngineConfigsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListEngineConfigsResponseBodyEngineConfigs>> engineConfigs_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
