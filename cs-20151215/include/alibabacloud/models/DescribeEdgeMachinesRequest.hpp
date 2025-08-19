// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEDGEMACHINESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEDGEMACHINESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeEdgeMachinesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEdgeMachinesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(hostname, hostname_);
      DARABONBA_PTR_TO_JSON(life_state, lifeState_);
      DARABONBA_PTR_TO_JSON(model, model_);
      DARABONBA_PTR_TO_JSON(online_state, onlineState_);
      DARABONBA_PTR_TO_JSON(page_number, pageNumber_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEdgeMachinesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(life_state, lifeState_);
      DARABONBA_PTR_FROM_JSON(model, model_);
      DARABONBA_PTR_FROM_JSON(online_state, onlineState_);
      DARABONBA_PTR_FROM_JSON(page_number, pageNumber_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
    };
    DescribeEdgeMachinesRequest() = default ;
    DescribeEdgeMachinesRequest(const DescribeEdgeMachinesRequest &) = default ;
    DescribeEdgeMachinesRequest(DescribeEdgeMachinesRequest &&) = default ;
    DescribeEdgeMachinesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEdgeMachinesRequest() = default ;
    DescribeEdgeMachinesRequest& operator=(const DescribeEdgeMachinesRequest &) = default ;
    DescribeEdgeMachinesRequest& operator=(DescribeEdgeMachinesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hostname_ != nullptr
        && this->lifeState_ != nullptr && this->model_ != nullptr && this->onlineState_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr; };
    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline DescribeEdgeMachinesRequest& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // lifeState Field Functions 
    bool hasLifeState() const { return this->lifeState_ != nullptr;};
    void deleteLifeState() { this->lifeState_ = nullptr;};
    inline string lifeState() const { DARABONBA_PTR_GET_DEFAULT(lifeState_, "") };
    inline DescribeEdgeMachinesRequest& setLifeState(string lifeState) { DARABONBA_PTR_SET_VALUE(lifeState_, lifeState) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline DescribeEdgeMachinesRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // onlineState Field Functions 
    bool hasOnlineState() const { return this->onlineState_ != nullptr;};
    void deleteOnlineState() { this->onlineState_ = nullptr;};
    inline string onlineState() const { DARABONBA_PTR_GET_DEFAULT(onlineState_, "") };
    inline DescribeEdgeMachinesRequest& setOnlineState(string onlineState) { DARABONBA_PTR_SET_VALUE(onlineState_, onlineState) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeEdgeMachinesRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeEdgeMachinesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The `hostname` of the cloud-native box.
    std::shared_ptr<string> hostname_ = nullptr;
    // The lifecycle status.
    std::shared_ptr<string> lifeState_ = nullptr;
    // The type of cloud-native box.
    std::shared_ptr<string> model_ = nullptr;
    // The status of the cloud-native box. Valid values:
    // 
    // *   `offline`
    // *   `online`
    std::shared_ptr<string> onlineState_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
