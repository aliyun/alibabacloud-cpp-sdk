// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAFFECTEDASSETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAFFECTEDASSETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAffectedAssetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAffectedAssetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(Levels, levels_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAffectedAssetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(Levels, levels_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeAffectedAssetsRequest() = default ;
    DescribeAffectedAssetsRequest(const DescribeAffectedAssetsRequest &) = default ;
    DescribeAffectedAssetsRequest(DescribeAffectedAssetsRequest &&) = default ;
    DescribeAffectedAssetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAffectedAssetsRequest() = default ;
    DescribeAffectedAssetsRequest& operator=(const DescribeAffectedAssetsRequest &) = default ;
    DescribeAffectedAssetsRequest& operator=(DescribeAffectedAssetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->current_ == nullptr
        && return this->levels_ == nullptr && return this->pageSize_ == nullptr; };
    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline string current() const { DARABONBA_PTR_GET_DEFAULT(current_, "") };
    inline DescribeAffectedAssetsRequest& setCurrent(string current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // levels Field Functions 
    bool hasLevels() const { return this->levels_ != nullptr;};
    void deleteLevels() { this->levels_ = nullptr;};
    inline string levels() const { DARABONBA_PTR_GET_DEFAULT(levels_, "") };
    inline DescribeAffectedAssetsRequest& setLevels(string levels) { DARABONBA_PTR_SET_VALUE(levels_, levels) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeAffectedAssetsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The number of the page to return.
    std::shared_ptr<string> current_ = nullptr;
    // The severity. Separate multiple severities with commas (,). Valid values:
    // 
    // *   serious
    // *   suspicious
    // *   remind
    std::shared_ptr<string> levels_ = nullptr;
    // The number of entries to return on each page. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // > We recommend that you do not leave this parameter empty.
    std::shared_ptr<string> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
