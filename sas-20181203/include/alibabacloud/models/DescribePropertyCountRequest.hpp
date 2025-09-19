// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
    };
    DescribePropertyCountRequest() = default ;
    DescribePropertyCountRequest(const DescribePropertyCountRequest &) = default ;
    DescribePropertyCountRequest(DescribePropertyCountRequest &&) = default ;
    DescribePropertyCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyCountRequest() = default ;
    DescribePropertyCountRequest& operator=(const DescribePropertyCountRequest &) = default ;
    DescribePropertyCountRequest& operator=(DescribePropertyCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->type_ != nullptr
        && this->uuidList_ != nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribePropertyCountRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline string uuidList() const { DARABONBA_PTR_GET_DEFAULT(uuidList_, "") };
    inline DescribePropertyCountRequest& setUuidList(string uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };


  protected:
    // The type of the asset fingerprints. Separate multiple types with commas (,). Valid values:
    // 
    // *   **port**: port
    // *   **process**: process
    // *   **software**: software
    // *   **user**: account
    // *   **cron**: scheduled task
    // *   **sca**: middleware
    // *   **web**: website
    // *   **database**: database
    // *   **lkm**: kernel module
    // *   **autorun**: startup item
    // *   **web_server**: web service
    std::shared_ptr<string> type_ = nullptr;
    // The UUIDs of the assets. Separate multiple UUIDs with commas (,).
    std::shared_ptr<string> uuidList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
