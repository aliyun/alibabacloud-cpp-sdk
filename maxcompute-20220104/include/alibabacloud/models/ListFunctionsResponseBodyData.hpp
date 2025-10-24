// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFUNCTIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTFUNCTIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFunctionsResponseBodyDataFunctions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListFunctionsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFunctionsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(functions, functions_);
      DARABONBA_PTR_TO_JSON(marker, marker_);
      DARABONBA_PTR_TO_JSON(maxItem, maxItem_);
    };
    friend void from_json(const Darabonba::Json& j, ListFunctionsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(functions, functions_);
      DARABONBA_PTR_FROM_JSON(marker, marker_);
      DARABONBA_PTR_FROM_JSON(maxItem, maxItem_);
    };
    ListFunctionsResponseBodyData() = default ;
    ListFunctionsResponseBodyData(const ListFunctionsResponseBodyData &) = default ;
    ListFunctionsResponseBodyData(ListFunctionsResponseBodyData &&) = default ;
    ListFunctionsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFunctionsResponseBodyData() = default ;
    ListFunctionsResponseBodyData& operator=(const ListFunctionsResponseBodyData &) = default ;
    ListFunctionsResponseBodyData& operator=(ListFunctionsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->functions_ == nullptr
        && return this->marker_ == nullptr && return this->maxItem_ == nullptr; };
    // functions Field Functions 
    bool hasFunctions() const { return this->functions_ != nullptr;};
    void deleteFunctions() { this->functions_ = nullptr;};
    inline const vector<Models::ListFunctionsResponseBodyDataFunctions> & functions() const { DARABONBA_PTR_GET_CONST(functions_, vector<Models::ListFunctionsResponseBodyDataFunctions>) };
    inline vector<Models::ListFunctionsResponseBodyDataFunctions> functions() { DARABONBA_PTR_GET(functions_, vector<Models::ListFunctionsResponseBodyDataFunctions>) };
    inline ListFunctionsResponseBodyData& setFunctions(const vector<Models::ListFunctionsResponseBodyDataFunctions> & functions) { DARABONBA_PTR_SET_VALUE(functions_, functions) };
    inline ListFunctionsResponseBodyData& setFunctions(vector<Models::ListFunctionsResponseBodyDataFunctions> && functions) { DARABONBA_PTR_SET_RVALUE(functions_, functions) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string marker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListFunctionsResponseBodyData& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // maxItem Field Functions 
    bool hasMaxItem() const { return this->maxItem_ != nullptr;};
    void deleteMaxItem() { this->maxItem_ = nullptr;};
    inline int32_t maxItem() const { DARABONBA_PTR_GET_DEFAULT(maxItem_, 0) };
    inline ListFunctionsResponseBodyData& setMaxItem(int32_t maxItem) { DARABONBA_PTR_SET_VALUE(maxItem_, maxItem) };


  protected:
    // The information about each function.
    std::shared_ptr<vector<Models::ListFunctionsResponseBodyDataFunctions>> functions_ = nullptr;
    // Indicates the marker after which the returned list begins.
    std::shared_ptr<string> marker_ = nullptr;
    // The maximum number of entries returned per page.
    std::shared_ptr<int32_t> maxItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
