// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROGRAMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROGRAMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListProgramsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProgramsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProgramName, programName_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
    };
    friend void from_json(const Darabonba::Json& j, ListProgramsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProgramName, programName_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
    };
    ListProgramsRequest() = default ;
    ListProgramsRequest(const ListProgramsRequest &) = default ;
    ListProgramsRequest(ListProgramsRequest &&) = default ;
    ListProgramsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProgramsRequest() = default ;
    ListProgramsRequest& operator=(const ListProgramsRequest &) = default ;
    ListProgramsRequest& operator=(ListProgramsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channelName_ != nullptr
        && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->programName_ != nullptr && this->sortBy_ != nullptr; };
    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string channelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline ListProgramsRequest& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline string pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, "") };
    inline ListProgramsRequest& setPageNo(string pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListProgramsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // programName Field Functions 
    bool hasProgramName() const { return this->programName_ != nullptr;};
    void deleteProgramName() { this->programName_ = nullptr;};
    inline string programName() const { DARABONBA_PTR_GET_DEFAULT(programName_, "") };
    inline ListProgramsRequest& setProgramName(string programName) { DARABONBA_PTR_SET_VALUE(programName_, programName) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListProgramsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


  protected:
    // The name of the channel.
    // 
    // This parameter is required.
    std::shared_ptr<string> channelName_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<string> pageNo_ = nullptr;
    // The number of entries per page. Default value: 20. Valid values: 1 to 100.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The name of the program.
    std::shared_ptr<string> programName_ = nullptr;
    // The sorting order. By default, the query results are sorted by creation time in descending order. Valid values:
    // 
    // *   asc: ascending order.
    // *   desc: descending order.
    std::shared_ptr<string> sortBy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
