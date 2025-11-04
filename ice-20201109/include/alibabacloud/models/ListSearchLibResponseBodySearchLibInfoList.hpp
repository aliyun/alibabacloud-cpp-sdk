// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHLIBRESPONSEBODYSEARCHLIBINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHLIBRESPONSEBODYSEARCHLIBINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSearchLibResponseBodySearchLibInfoListIndexInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListSearchLibResponseBodySearchLibInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchLibResponseBodySearchLibInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(IndexInfo, indexInfo_);
      DARABONBA_PTR_TO_JSON(SearchLibName, searchLibName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchLibResponseBodySearchLibInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(IndexInfo, indexInfo_);
      DARABONBA_PTR_FROM_JSON(SearchLibName, searchLibName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListSearchLibResponseBodySearchLibInfoList() = default ;
    ListSearchLibResponseBodySearchLibInfoList(const ListSearchLibResponseBodySearchLibInfoList &) = default ;
    ListSearchLibResponseBodySearchLibInfoList(ListSearchLibResponseBodySearchLibInfoList &&) = default ;
    ListSearchLibResponseBodySearchLibInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchLibResponseBodySearchLibInfoList() = default ;
    ListSearchLibResponseBodySearchLibInfoList& operator=(const ListSearchLibResponseBodySearchLibInfoList &) = default ;
    ListSearchLibResponseBodySearchLibInfoList& operator=(ListSearchLibResponseBodySearchLibInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->indexInfo_ == nullptr
        && return this->searchLibName_ == nullptr && return this->status_ == nullptr; };
    // indexInfo Field Functions 
    bool hasIndexInfo() const { return this->indexInfo_ != nullptr;};
    void deleteIndexInfo() { this->indexInfo_ = nullptr;};
    inline const vector<Models::ListSearchLibResponseBodySearchLibInfoListIndexInfo> & indexInfo() const { DARABONBA_PTR_GET_CONST(indexInfo_, vector<Models::ListSearchLibResponseBodySearchLibInfoListIndexInfo>) };
    inline vector<Models::ListSearchLibResponseBodySearchLibInfoListIndexInfo> indexInfo() { DARABONBA_PTR_GET(indexInfo_, vector<Models::ListSearchLibResponseBodySearchLibInfoListIndexInfo>) };
    inline ListSearchLibResponseBodySearchLibInfoList& setIndexInfo(const vector<Models::ListSearchLibResponseBodySearchLibInfoListIndexInfo> & indexInfo) { DARABONBA_PTR_SET_VALUE(indexInfo_, indexInfo) };
    inline ListSearchLibResponseBodySearchLibInfoList& setIndexInfo(vector<Models::ListSearchLibResponseBodySearchLibInfoListIndexInfo> && indexInfo) { DARABONBA_PTR_SET_RVALUE(indexInfo_, indexInfo) };


    // searchLibName Field Functions 
    bool hasSearchLibName() const { return this->searchLibName_ != nullptr;};
    void deleteSearchLibName() { this->searchLibName_ = nullptr;};
    inline string searchLibName() const { DARABONBA_PTR_GET_DEFAULT(searchLibName_, "") };
    inline ListSearchLibResponseBodySearchLibInfoList& setSearchLibName(string searchLibName) { DARABONBA_PTR_SET_VALUE(searchLibName_, searchLibName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListSearchLibResponseBodySearchLibInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<vector<Models::ListSearchLibResponseBodySearchLibInfoListIndexInfo>> indexInfo_ = nullptr;
    // The search library.
    std::shared_ptr<string> searchLibName_ = nullptr;
    // The status of the search library.
    // 
    // *   normal
    // *   deleting
    // *   deleteFail
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
