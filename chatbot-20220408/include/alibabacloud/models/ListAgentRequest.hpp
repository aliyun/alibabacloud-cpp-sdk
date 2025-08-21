// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(GoodsCodes, goodsCodes_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(GoodsCodes, goodsCodes_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListAgentRequest() = default ;
    ListAgentRequest(const ListAgentRequest &) = default ;
    ListAgentRequest(ListAgentRequest &&) = default ;
    ListAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentRequest() = default ;
    ListAgentRequest& operator=(const ListAgentRequest &) = default ;
    ListAgentRequest& operator=(ListAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentName_ != nullptr
        && this->goodsCodes_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr; };
    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string agentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline ListAgentRequest& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // goodsCodes Field Functions 
    bool hasGoodsCodes() const { return this->goodsCodes_ != nullptr;};
    void deleteGoodsCodes() { this->goodsCodes_ = nullptr;};
    inline string goodsCodes() const { DARABONBA_PTR_GET_DEFAULT(goodsCodes_, "") };
    inline ListAgentRequest& setGoodsCodes(string goodsCodes) { DARABONBA_PTR_SET_VALUE(goodsCodes_, goodsCodes) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAgentRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAgentRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    std::shared_ptr<string> agentName_ = nullptr;
    std::shared_ptr<string> goodsCodes_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
