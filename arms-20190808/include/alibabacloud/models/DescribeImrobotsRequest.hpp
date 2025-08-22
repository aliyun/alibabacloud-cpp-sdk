// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMROBOTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMROBOTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeIMRobotsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIMRobotsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RobotIds, robotIds_);
      DARABONBA_PTR_TO_JSON(RobotName, robotName_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIMRobotsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RobotIds, robotIds_);
      DARABONBA_PTR_FROM_JSON(RobotName, robotName_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    DescribeIMRobotsRequest() = default ;
    DescribeIMRobotsRequest(const DescribeIMRobotsRequest &) = default ;
    DescribeIMRobotsRequest(DescribeIMRobotsRequest &&) = default ;
    DescribeIMRobotsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIMRobotsRequest() = default ;
    DescribeIMRobotsRequest& operator=(const DescribeIMRobotsRequest &) = default ;
    DescribeIMRobotsRequest& operator=(DescribeIMRobotsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->page_ != nullptr
        && this->robotIds_ != nullptr && this->robotName_ != nullptr && this->size_ != nullptr; };
    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline DescribeIMRobotsRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // robotIds Field Functions 
    bool hasRobotIds() const { return this->robotIds_ != nullptr;};
    void deleteRobotIds() { this->robotIds_ = nullptr;};
    inline string robotIds() const { DARABONBA_PTR_GET_DEFAULT(robotIds_, "") };
    inline DescribeIMRobotsRequest& setRobotIds(string robotIds) { DARABONBA_PTR_SET_VALUE(robotIds_, robotIds) };


    // robotName Field Functions 
    bool hasRobotName() const { return this->robotName_ != nullptr;};
    void deleteRobotName() { this->robotName_ = nullptr;};
    inline string robotName() const { DARABONBA_PTR_GET_DEFAULT(robotName_, "") };
    inline DescribeIMRobotsRequest& setRobotName(string robotName) { DARABONBA_PTR_SET_VALUE(robotName_, robotName) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeIMRobotsRequest& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The number of the page to return.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> page_ = nullptr;
    // The chatbot IDs.
    std::shared_ptr<string> robotIds_ = nullptr;
    // The name of the IM chatbot.
    std::shared_ptr<string> robotName_ = nullptr;
    // The number of IM chatbots to return on each page.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
