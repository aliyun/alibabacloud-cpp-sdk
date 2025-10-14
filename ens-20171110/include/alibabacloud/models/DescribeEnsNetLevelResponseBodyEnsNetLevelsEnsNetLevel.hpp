// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSNETLEVELRESPONSEBODYENSNETLEVELSENSNETLEVEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSNETLEVELRESPONSEBODYENSNETLEVELSENSNETLEVEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsNetLevelResponseBodyEnsNetLevelsEnsNetLevel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsNetLevelResponseBodyEnsNetLevelsEnsNetLevel& obj) { 
      DARABONBA_PTR_TO_JSON(EnsNetLevelCode, ensNetLevelCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsNetLevelResponseBodyEnsNetLevelsEnsNetLevel& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsNetLevelCode, ensNetLevelCode_);
    };
    DescribeEnsNetLevelResponseBodyEnsNetLevelsEnsNetLevel() = default ;
    DescribeEnsNetLevelResponseBodyEnsNetLevelsEnsNetLevel(const DescribeEnsNetLevelResponseBodyEnsNetLevelsEnsNetLevel &) = default ;
    DescribeEnsNetLevelResponseBodyEnsNetLevelsEnsNetLevel(DescribeEnsNetLevelResponseBodyEnsNetLevelsEnsNetLevel &&) = default ;
    DescribeEnsNetLevelResponseBodyEnsNetLevelsEnsNetLevel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsNetLevelResponseBodyEnsNetLevelsEnsNetLevel() = default ;
    DescribeEnsNetLevelResponseBodyEnsNetLevelsEnsNetLevel& operator=(const DescribeEnsNetLevelResponseBodyEnsNetLevelsEnsNetLevel &) = default ;
    DescribeEnsNetLevelResponseBodyEnsNetLevelsEnsNetLevel& operator=(DescribeEnsNetLevelResponseBodyEnsNetLevelsEnsNetLevel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ensNetLevelCode_ == nullptr; };
    // ensNetLevelCode Field Functions 
    bool hasEnsNetLevelCode() const { return this->ensNetLevelCode_ != nullptr;};
    void deleteEnsNetLevelCode() { this->ensNetLevelCode_ = nullptr;};
    inline string ensNetLevelCode() const { DARABONBA_PTR_GET_DEFAULT(ensNetLevelCode_, "") };
    inline DescribeEnsNetLevelResponseBodyEnsNetLevelsEnsNetLevel& setEnsNetLevelCode(string ensNetLevelCode) { DARABONBA_PTR_SET_VALUE(ensNetLevelCode_, ensNetLevelCode) };


  protected:
    // The network level. Valid values:
    // 
    // *   Big: greater area.
    // *   Middle: province.
    // *   Small: city.
    std::shared_ptr<string> ensNetLevelCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
