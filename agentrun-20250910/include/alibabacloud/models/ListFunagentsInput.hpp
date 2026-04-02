// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFUNAGENTSINPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTFUNAGENTSINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ListFunagentsInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFunagentsInput& obj) { 
      DARABONBA_PTR_TO_JSON(funagentName, funagentName_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListFunagentsInput& obj) { 
      DARABONBA_PTR_FROM_JSON(funagentName, funagentName_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListFunagentsInput() = default ;
    ListFunagentsInput(const ListFunagentsInput &) = default ;
    ListFunagentsInput(ListFunagentsInput &&) = default ;
    ListFunagentsInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFunagentsInput() = default ;
    ListFunagentsInput& operator=(const ListFunagentsInput &) = default ;
    ListFunagentsInput& operator=(ListFunagentsInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->funagentName_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->status_ == nullptr; };
    // funagentName Field Functions 
    bool hasFunagentName() const { return this->funagentName_ != nullptr;};
    void deleteFunagentName() { this->funagentName_ = nullptr;};
    inline string getFunagentName() const { DARABONBA_PTR_GET_DEFAULT(funagentName_, "") };
    inline ListFunagentsInput& setFunagentName(string funagentName) { DARABONBA_PTR_SET_VALUE(funagentName_, funagentName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListFunagentsInput& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListFunagentsInput& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListFunagentsInput& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> funagentName_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
