// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLELINEAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLELINEAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMetaTableLineageResponseBodyDataDataEntityList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaTableLineageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTableLineageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DataEntityList, dataEntityList_);
      DARABONBA_PTR_TO_JSON(HasNext, hasNext_);
      DARABONBA_PTR_TO_JSON(NextPrimaryKey, nextPrimaryKey_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTableLineageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataEntityList, dataEntityList_);
      DARABONBA_PTR_FROM_JSON(HasNext, hasNext_);
      DARABONBA_PTR_FROM_JSON(NextPrimaryKey, nextPrimaryKey_);
    };
    GetMetaTableLineageResponseBodyData() = default ;
    GetMetaTableLineageResponseBodyData(const GetMetaTableLineageResponseBodyData &) = default ;
    GetMetaTableLineageResponseBodyData(GetMetaTableLineageResponseBodyData &&) = default ;
    GetMetaTableLineageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTableLineageResponseBodyData() = default ;
    GetMetaTableLineageResponseBodyData& operator=(const GetMetaTableLineageResponseBodyData &) = default ;
    GetMetaTableLineageResponseBodyData& operator=(GetMetaTableLineageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataEntityList_ != nullptr
        && this->hasNext_ != nullptr && this->nextPrimaryKey_ != nullptr; };
    // dataEntityList Field Functions 
    bool hasDataEntityList() const { return this->dataEntityList_ != nullptr;};
    void deleteDataEntityList() { this->dataEntityList_ = nullptr;};
    inline const vector<Models::GetMetaTableLineageResponseBodyDataDataEntityList> & dataEntityList() const { DARABONBA_PTR_GET_CONST(dataEntityList_, vector<Models::GetMetaTableLineageResponseBodyDataDataEntityList>) };
    inline vector<Models::GetMetaTableLineageResponseBodyDataDataEntityList> dataEntityList() { DARABONBA_PTR_GET(dataEntityList_, vector<Models::GetMetaTableLineageResponseBodyDataDataEntityList>) };
    inline GetMetaTableLineageResponseBodyData& setDataEntityList(const vector<Models::GetMetaTableLineageResponseBodyDataDataEntityList> & dataEntityList) { DARABONBA_PTR_SET_VALUE(dataEntityList_, dataEntityList) };
    inline GetMetaTableLineageResponseBodyData& setDataEntityList(vector<Models::GetMetaTableLineageResponseBodyDataDataEntityList> && dataEntityList) { DARABONBA_PTR_SET_RVALUE(dataEntityList_, dataEntityList) };


    // hasNext Field Functions 
    bool hasHasNext() const { return this->hasNext_ != nullptr;};
    void deleteHasNext() { this->hasNext_ = nullptr;};
    inline bool hasNext() const { DARABONBA_PTR_GET_DEFAULT(hasNext_, false) };
    inline GetMetaTableLineageResponseBodyData& setHasNext(bool hasNext) { DARABONBA_PTR_SET_VALUE(hasNext_, hasNext) };


    // nextPrimaryKey Field Functions 
    bool hasNextPrimaryKey() const { return this->nextPrimaryKey_ != nullptr;};
    void deleteNextPrimaryKey() { this->nextPrimaryKey_ = nullptr;};
    inline string nextPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(nextPrimaryKey_, "") };
    inline GetMetaTableLineageResponseBodyData& setNextPrimaryKey(string nextPrimaryKey) { DARABONBA_PTR_SET_VALUE(nextPrimaryKey_, nextPrimaryKey) };


  protected:
    // The information about the table.
    std::shared_ptr<vector<Models::GetMetaTableLineageResponseBodyDataDataEntityList>> dataEntityList_ = nullptr;
    // Indicates whether the next page exists.
    std::shared_ptr<bool> hasNext_ = nullptr;
    // The logic of paging. If the value true is returned for the HasNext parameter and a value is returned for the NextPrimaryKey parameter in the response of the previous request, you must use the value of the NextPrimaryKey parameter for the next request.
    std::shared_ptr<string> nextPrimaryKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
