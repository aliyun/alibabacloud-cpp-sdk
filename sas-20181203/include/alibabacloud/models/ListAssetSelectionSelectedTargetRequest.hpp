// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASSETSELECTIONSELECTEDTARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTASSETSELECTIONSELECTEDTARGETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAssetSelectionSelectedTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAssetSelectionSelectedTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SelectionKey, selectionKey_);
      DARABONBA_PTR_TO_JSON(TargetList, targetList_);
    };
    friend void from_json(const Darabonba::Json& j, ListAssetSelectionSelectedTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SelectionKey, selectionKey_);
      DARABONBA_PTR_FROM_JSON(TargetList, targetList_);
    };
    ListAssetSelectionSelectedTargetRequest() = default ;
    ListAssetSelectionSelectedTargetRequest(const ListAssetSelectionSelectedTargetRequest &) = default ;
    ListAssetSelectionSelectedTargetRequest(ListAssetSelectionSelectedTargetRequest &&) = default ;
    ListAssetSelectionSelectedTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAssetSelectionSelectedTargetRequest() = default ;
    ListAssetSelectionSelectedTargetRequest& operator=(const ListAssetSelectionSelectedTargetRequest &) = default ;
    ListAssetSelectionSelectedTargetRequest& operator=(ListAssetSelectionSelectedTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->selectionKey_ == nullptr
        && return this->targetList_ == nullptr; };
    // selectionKey Field Functions 
    bool hasSelectionKey() const { return this->selectionKey_ != nullptr;};
    void deleteSelectionKey() { this->selectionKey_ = nullptr;};
    inline string selectionKey() const { DARABONBA_PTR_GET_DEFAULT(selectionKey_, "") };
    inline ListAssetSelectionSelectedTargetRequest& setSelectionKey(string selectionKey) { DARABONBA_PTR_SET_VALUE(selectionKey_, selectionKey) };


    // targetList Field Functions 
    bool hasTargetList() const { return this->targetList_ != nullptr;};
    void deleteTargetList() { this->targetList_ = nullptr;};
    inline const vector<string> & targetList() const { DARABONBA_PTR_GET_CONST(targetList_, vector<string>) };
    inline vector<string> targetList() { DARABONBA_PTR_GET(targetList_, vector<string>) };
    inline ListAssetSelectionSelectedTargetRequest& setTargetList(const vector<string> & targetList) { DARABONBA_PTR_SET_VALUE(targetList_, targetList) };
    inline ListAssetSelectionSelectedTargetRequest& setTargetList(vector<string> && targetList) { DARABONBA_PTR_SET_RVALUE(targetList_, targetList) };


  protected:
    // The unique ID of the asset.
    // 
    // This parameter is required.
    std::shared_ptr<string> selectionKey_ = nullptr;
    // The details of queries.
    std::shared_ptr<vector<string>> targetList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
