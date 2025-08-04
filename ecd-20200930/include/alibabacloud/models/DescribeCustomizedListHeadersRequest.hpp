// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEDLISTHEADERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEDLISTHEADERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeCustomizedListHeadersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomizedListHeadersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LangType, langType_);
      DARABONBA_PTR_TO_JSON(ListType, listType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomizedListHeadersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LangType, langType_);
      DARABONBA_PTR_FROM_JSON(ListType, listType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeCustomizedListHeadersRequest() = default ;
    DescribeCustomizedListHeadersRequest(const DescribeCustomizedListHeadersRequest &) = default ;
    DescribeCustomizedListHeadersRequest(DescribeCustomizedListHeadersRequest &&) = default ;
    DescribeCustomizedListHeadersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomizedListHeadersRequest() = default ;
    DescribeCustomizedListHeadersRequest& operator=(const DescribeCustomizedListHeadersRequest &) = default ;
    DescribeCustomizedListHeadersRequest& operator=(DescribeCustomizedListHeadersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->langType_ != nullptr
        && this->listType_ != nullptr && this->regionId_ != nullptr; };
    // langType Field Functions 
    bool hasLangType() const { return this->langType_ != nullptr;};
    void deleteLangType() { this->langType_ = nullptr;};
    inline string langType() const { DARABONBA_PTR_GET_DEFAULT(langType_, "") };
    inline DescribeCustomizedListHeadersRequest& setLangType(string langType) { DARABONBA_PTR_SET_VALUE(langType_, langType) };


    // listType Field Functions 
    bool hasListType() const { return this->listType_ != nullptr;};
    void deleteListType() { this->listType_ = nullptr;};
    inline string listType() const { DARABONBA_PTR_GET_DEFAULT(listType_, "") };
    inline DescribeCustomizedListHeadersRequest& setListType(string listType) { DARABONBA_PTR_SET_VALUE(listType_, listType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCustomizedListHeadersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<string> langType_ = nullptr;
    std::shared_ptr<string> listType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
