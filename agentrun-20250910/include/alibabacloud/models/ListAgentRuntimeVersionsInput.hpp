// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTRUNTIMEVERSIONSINPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTRUNTIMEVERSIONSINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ListAgentRuntimeVersionsInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentRuntimeVersionsInput& obj) { 
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentRuntimeVersionsInput& obj) { 
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
    };
    ListAgentRuntimeVersionsInput() = default ;
    ListAgentRuntimeVersionsInput(const ListAgentRuntimeVersionsInput &) = default ;
    ListAgentRuntimeVersionsInput(ListAgentRuntimeVersionsInput &&) = default ;
    ListAgentRuntimeVersionsInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentRuntimeVersionsInput() = default ;
    ListAgentRuntimeVersionsInput& operator=(const ListAgentRuntimeVersionsInput &) = default ;
    ListAgentRuntimeVersionsInput& operator=(ListAgentRuntimeVersionsInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAgentRuntimeVersionsInput& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAgentRuntimeVersionsInput& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // 页码
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // 每页记录数
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
