// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMGSAPIRESTRESPONSEBODYRESULTCONTENTVALUEMOCKRULE_HPP_
#define ALIBABACLOUD_MODELS_QUERYMGSAPIRESTRESPONSEBODYRESULTCONTENTVALUEMOCKRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMgsApirestResponseBodyResultContentValueMockRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMgsApirestResponseBodyResultContentValueMockRule& obj) { 
      DARABONBA_PTR_TO_JSON(MockData, mockData_);
      DARABONBA_PTR_TO_JSON(NeedMock, needMock_);
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMgsApirestResponseBodyResultContentValueMockRule& obj) { 
      DARABONBA_PTR_FROM_JSON(MockData, mockData_);
      DARABONBA_PTR_FROM_JSON(NeedMock, needMock_);
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QueryMgsApirestResponseBodyResultContentValueMockRule() = default ;
    QueryMgsApirestResponseBodyResultContentValueMockRule(const QueryMgsApirestResponseBodyResultContentValueMockRule &) = default ;
    QueryMgsApirestResponseBodyResultContentValueMockRule(QueryMgsApirestResponseBodyResultContentValueMockRule &&) = default ;
    QueryMgsApirestResponseBodyResultContentValueMockRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMgsApirestResponseBodyResultContentValueMockRule() = default ;
    QueryMgsApirestResponseBodyResultContentValueMockRule& operator=(const QueryMgsApirestResponseBodyResultContentValueMockRule &) = default ;
    QueryMgsApirestResponseBodyResultContentValueMockRule& operator=(QueryMgsApirestResponseBodyResultContentValueMockRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mockData_ != nullptr
        && this->needMock_ != nullptr && this->percentage_ != nullptr && this->type_ != nullptr; };
    // mockData Field Functions 
    bool hasMockData() const { return this->mockData_ != nullptr;};
    void deleteMockData() { this->mockData_ = nullptr;};
    inline string mockData() const { DARABONBA_PTR_GET_DEFAULT(mockData_, "") };
    inline QueryMgsApirestResponseBodyResultContentValueMockRule& setMockData(string mockData) { DARABONBA_PTR_SET_VALUE(mockData_, mockData) };


    // needMock Field Functions 
    bool hasNeedMock() const { return this->needMock_ != nullptr;};
    void deleteNeedMock() { this->needMock_ = nullptr;};
    inline bool needMock() const { DARABONBA_PTR_GET_DEFAULT(needMock_, false) };
    inline QueryMgsApirestResponseBodyResultContentValueMockRule& setNeedMock(bool needMock) { DARABONBA_PTR_SET_VALUE(needMock_, needMock) };


    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline int64_t percentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0L) };
    inline QueryMgsApirestResponseBodyResultContentValueMockRule& setPercentage(int64_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryMgsApirestResponseBodyResultContentValueMockRule& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> mockData_ = nullptr;
    std::shared_ptr<bool> needMock_ = nullptr;
    std::shared_ptr<int64_t> percentage_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
