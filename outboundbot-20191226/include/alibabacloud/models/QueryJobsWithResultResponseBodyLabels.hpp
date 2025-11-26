// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBSWITHRESULTRESPONSEBODYLABELS_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBSWITHRESULTRESPONSEBODYLABELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class QueryJobsWithResultResponseBodyLabels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobsWithResultResponseBodyLabels& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ValueList, valueList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobsWithResultResponseBodyLabels& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ValueList, valueList_);
    };
    QueryJobsWithResultResponseBodyLabels() = default ;
    QueryJobsWithResultResponseBodyLabels(const QueryJobsWithResultResponseBodyLabels &) = default ;
    QueryJobsWithResultResponseBodyLabels(QueryJobsWithResultResponseBodyLabels &&) = default ;
    QueryJobsWithResultResponseBodyLabels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobsWithResultResponseBodyLabels() = default ;
    QueryJobsWithResultResponseBodyLabels& operator=(const QueryJobsWithResultResponseBodyLabels &) = default ;
    QueryJobsWithResultResponseBodyLabels& operator=(QueryJobsWithResultResponseBodyLabels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->valueList_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryJobsWithResultResponseBodyLabels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // valueList Field Functions 
    bool hasValueList() const { return this->valueList_ != nullptr;};
    void deleteValueList() { this->valueList_ = nullptr;};
    inline const vector<string> & valueList() const { DARABONBA_PTR_GET_CONST(valueList_, vector<string>) };
    inline vector<string> valueList() { DARABONBA_PTR_GET(valueList_, vector<string>) };
    inline QueryJobsWithResultResponseBodyLabels& setValueList(const vector<string> & valueList) { DARABONBA_PTR_SET_VALUE(valueList_, valueList) };
    inline QueryJobsWithResultResponseBodyLabels& setValueList(vector<string> && valueList) { DARABONBA_PTR_SET_RVALUE(valueList_, valueList) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<string>> valueList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
