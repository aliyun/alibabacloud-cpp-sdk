// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTELLIGENTSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINTELLIGENTSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListIntelligentStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntelligentStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(StrategyIds, strategyIds_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntelligentStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(StrategyIds, strategyIds_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListIntelligentStrategyRequest() = default ;
    ListIntelligentStrategyRequest(const ListIntelligentStrategyRequest &) = default ;
    ListIntelligentStrategyRequest(ListIntelligentStrategyRequest &&) = default ;
    ListIntelligentStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntelligentStrategyRequest() = default ;
    ListIntelligentStrategyRequest& operator=(const ListIntelligentStrategyRequest &) = default ;
    ListIntelligentStrategyRequest& operator=(ListIntelligentStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNo_ != nullptr
        && this->pageSize_ != nullptr && this->state_ != nullptr && this->strategyIds_ != nullptr && this->type_ != nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListIntelligentStrategyRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListIntelligentStrategyRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListIntelligentStrategyRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // strategyIds Field Functions 
    bool hasStrategyIds() const { return this->strategyIds_ != nullptr;};
    void deleteStrategyIds() { this->strategyIds_ = nullptr;};
    inline string strategyIds() const { DARABONBA_PTR_GET_DEFAULT(strategyIds_, "") };
    inline ListIntelligentStrategyRequest& setStrategyIds(string strategyIds) { DARABONBA_PTR_SET_VALUE(strategyIds_, strategyIds) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListIntelligentStrategyRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> strategyIds_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
