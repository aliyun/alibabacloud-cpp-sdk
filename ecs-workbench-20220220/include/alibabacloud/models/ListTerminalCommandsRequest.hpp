// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTERMINALCOMMANDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTERMINALCOMMANDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20220220
{
namespace Models
{
  class ListTerminalCommandsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTerminalCommandsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TerminalSessionToken, terminalSessionToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListTerminalCommandsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TerminalSessionToken, terminalSessionToken_);
    };
    ListTerminalCommandsRequest() = default ;
    ListTerminalCommandsRequest(const ListTerminalCommandsRequest &) = default ;
    ListTerminalCommandsRequest(ListTerminalCommandsRequest &&) = default ;
    ListTerminalCommandsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTerminalCommandsRequest() = default ;
    ListTerminalCommandsRequest& operator=(const ListTerminalCommandsRequest &) = default ;
    ListTerminalCommandsRequest& operator=(ListTerminalCommandsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->regionId_ != nullptr && this->terminalSessionToken_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTerminalCommandsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTerminalCommandsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListTerminalCommandsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // terminalSessionToken Field Functions 
    bool hasTerminalSessionToken() const { return this->terminalSessionToken_ != nullptr;};
    void deleteTerminalSessionToken() { this->terminalSessionToken_ = nullptr;};
    inline string terminalSessionToken() const { DARABONBA_PTR_GET_DEFAULT(terminalSessionToken_, "") };
    inline ListTerminalCommandsRequest& setTerminalSessionToken(string terminalSessionToken) { DARABONBA_PTR_SET_VALUE(terminalSessionToken_, terminalSessionToken) };


  protected:
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> terminalSessionToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20220220
#endif
