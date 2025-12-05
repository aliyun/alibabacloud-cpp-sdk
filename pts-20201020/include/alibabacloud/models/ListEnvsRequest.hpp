// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTENVSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class ListEnvsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnvId, envId_);
      DARABONBA_PTR_TO_JSON(EnvName, envName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvId, envId_);
      DARABONBA_PTR_FROM_JSON(EnvName, envName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListEnvsRequest() = default ;
    ListEnvsRequest(const ListEnvsRequest &) = default ;
    ListEnvsRequest(ListEnvsRequest &&) = default ;
    ListEnvsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvsRequest() = default ;
    ListEnvsRequest& operator=(const ListEnvsRequest &) = default ;
    ListEnvsRequest& operator=(ListEnvsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->envId_ == nullptr
        && return this->envName_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr; };
    // envId Field Functions 
    bool hasEnvId() const { return this->envId_ != nullptr;};
    void deleteEnvId() { this->envId_ = nullptr;};
    inline string envId() const { DARABONBA_PTR_GET_DEFAULT(envId_, "") };
    inline ListEnvsRequest& setEnvId(string envId) { DARABONBA_PTR_SET_VALUE(envId_, envId) };


    // envName Field Functions 
    bool hasEnvName() const { return this->envName_ != nullptr;};
    void deleteEnvName() { this->envName_ = nullptr;};
    inline string envName() const { DARABONBA_PTR_GET_DEFAULT(envName_, "") };
    inline ListEnvsRequest& setEnvName(string envName) { DARABONBA_PTR_SET_VALUE(envName_, envName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListEnvsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListEnvsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The ID of the environment. If you specify this parameter, the operation returns the information about the environment identified by the ID.
    std::shared_ptr<string> envId_ = nullptr;
    // The keyword of the environment name. If you specify this parameter, the operation returns the information about the environments whose names contain the keyword.
    std::shared_ptr<string> envName_ = nullptr;
    // The page number.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of environments per page.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
