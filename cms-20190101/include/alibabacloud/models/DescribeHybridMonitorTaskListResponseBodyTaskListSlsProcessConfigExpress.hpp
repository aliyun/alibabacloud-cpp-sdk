// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORTASKLISTRESPONSEBODYTASKLISTSLSPROCESSCONFIGEXPRESS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORTASKLISTRESPONSEBODYTASKLISTSLSPROCESSCONFIGEXPRESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigExpress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigExpress& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(Express, express_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigExpress& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(Express, express_);
    };
    DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigExpress() = default ;
    DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigExpress(const DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigExpress &) = default ;
    DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigExpress(DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigExpress &&) = default ;
    DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigExpress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigExpress() = default ;
    DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigExpress& operator=(const DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigExpress &) = default ;
    DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigExpress& operator=(DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigExpress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && return this->express_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigExpress& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // express Field Functions 
    bool hasExpress() const { return this->express_ != nullptr;};
    void deleteExpress() { this->express_ = nullptr;};
    inline string express() const { DARABONBA_PTR_GET_DEFAULT(express_, "") };
    inline DescribeHybridMonitorTaskListResponseBodyTaskListSLSProcessConfigExpress& setExpress(string express) { DARABONBA_PTR_SET_VALUE(express_, express) };


  protected:
    // The alias of the extended field that indicates the result of basic operations that are performed on aggregation results.
    std::shared_ptr<string> alias_ = nullptr;
    // The extended field that indicates the result of basic operations that are performed on aggregation results.
    std::shared_ptr<string> express_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
