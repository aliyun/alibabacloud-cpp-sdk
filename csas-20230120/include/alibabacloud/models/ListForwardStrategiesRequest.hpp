// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFORWARDSTRATEGIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFORWARDSTRATEGIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListForwardStrategiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListForwardStrategiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DestinationIds, destinationIds_);
      DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_TO_JSON(ForwardIds, forwardIds_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListForwardStrategiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DestinationIds, destinationIds_);
      DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_FROM_JSON(ForwardIds, forwardIds_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListForwardStrategiesRequest() = default ;
    ListForwardStrategiesRequest(const ListForwardStrategiesRequest &) = default ;
    ListForwardStrategiesRequest(ListForwardStrategiesRequest &&) = default ;
    ListForwardStrategiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListForwardStrategiesRequest() = default ;
    ListForwardStrategiesRequest& operator=(const ListForwardStrategiesRequest &) = default ;
    ListForwardStrategiesRequest& operator=(ListForwardStrategiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->destinationIds_ == nullptr && this->destinationType_ == nullptr && this->forwardIds_ == nullptr && this->name_ == nullptr && this->pageSize_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline ListForwardStrategiesRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // destinationIds Field Functions 
    bool hasDestinationIds() const { return this->destinationIds_ != nullptr;};
    void deleteDestinationIds() { this->destinationIds_ = nullptr;};
    inline const vector<string> & getDestinationIds() const { DARABONBA_PTR_GET_CONST(destinationIds_, vector<string>) };
    inline vector<string> getDestinationIds() { DARABONBA_PTR_GET(destinationIds_, vector<string>) };
    inline ListForwardStrategiesRequest& setDestinationIds(const vector<string> & destinationIds) { DARABONBA_PTR_SET_VALUE(destinationIds_, destinationIds) };
    inline ListForwardStrategiesRequest& setDestinationIds(vector<string> && destinationIds) { DARABONBA_PTR_SET_RVALUE(destinationIds_, destinationIds) };


    // destinationType Field Functions 
    bool hasDestinationType() const { return this->destinationType_ != nullptr;};
    void deleteDestinationType() { this->destinationType_ = nullptr;};
    inline string getDestinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
    inline ListForwardStrategiesRequest& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


    // forwardIds Field Functions 
    bool hasForwardIds() const { return this->forwardIds_ != nullptr;};
    void deleteForwardIds() { this->forwardIds_ = nullptr;};
    inline const vector<string> & getForwardIds() const { DARABONBA_PTR_GET_CONST(forwardIds_, vector<string>) };
    inline vector<string> getForwardIds() { DARABONBA_PTR_GET(forwardIds_, vector<string>) };
    inline ListForwardStrategiesRequest& setForwardIds(const vector<string> & forwardIds) { DARABONBA_PTR_SET_VALUE(forwardIds_, forwardIds) };
    inline ListForwardStrategiesRequest& setForwardIds(vector<string> && forwardIds) { DARABONBA_PTR_SET_RVALUE(forwardIds_, forwardIds) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListForwardStrategiesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListForwardStrategiesRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<string> currentPage_ {};
    shared_ptr<vector<string>> destinationIds_ {};
    shared_ptr<string> destinationType_ {};
    shared_ptr<vector<string>> forwardIds_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
