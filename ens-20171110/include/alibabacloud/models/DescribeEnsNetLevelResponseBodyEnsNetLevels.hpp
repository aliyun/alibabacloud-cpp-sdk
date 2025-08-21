// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSNETLEVELRESPONSEBODYENSNETLEVELS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSNETLEVELRESPONSEBODYENSNETLEVELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEnsNetLevelResponseBodyEnsNetLevelsEnsNetLevel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsNetLevelResponseBodyEnsNetLevels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsNetLevelResponseBodyEnsNetLevels& obj) { 
      DARABONBA_PTR_TO_JSON(EnsNetLevel, ensNetLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsNetLevelResponseBodyEnsNetLevels& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsNetLevel, ensNetLevel_);
    };
    DescribeEnsNetLevelResponseBodyEnsNetLevels() = default ;
    DescribeEnsNetLevelResponseBodyEnsNetLevels(const DescribeEnsNetLevelResponseBodyEnsNetLevels &) = default ;
    DescribeEnsNetLevelResponseBodyEnsNetLevels(DescribeEnsNetLevelResponseBodyEnsNetLevels &&) = default ;
    DescribeEnsNetLevelResponseBodyEnsNetLevels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsNetLevelResponseBodyEnsNetLevels() = default ;
    DescribeEnsNetLevelResponseBodyEnsNetLevels& operator=(const DescribeEnsNetLevelResponseBodyEnsNetLevels &) = default ;
    DescribeEnsNetLevelResponseBodyEnsNetLevels& operator=(DescribeEnsNetLevelResponseBodyEnsNetLevels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ensNetLevel_ != nullptr; };
    // ensNetLevel Field Functions 
    bool hasEnsNetLevel() const { return this->ensNetLevel_ != nullptr;};
    void deleteEnsNetLevel() { this->ensNetLevel_ = nullptr;};
    inline const vector<Models::DescribeEnsNetLevelResponseBodyEnsNetLevelsEnsNetLevel> & ensNetLevel() const { DARABONBA_PTR_GET_CONST(ensNetLevel_, vector<Models::DescribeEnsNetLevelResponseBodyEnsNetLevelsEnsNetLevel>) };
    inline vector<Models::DescribeEnsNetLevelResponseBodyEnsNetLevelsEnsNetLevel> ensNetLevel() { DARABONBA_PTR_GET(ensNetLevel_, vector<Models::DescribeEnsNetLevelResponseBodyEnsNetLevelsEnsNetLevel>) };
    inline DescribeEnsNetLevelResponseBodyEnsNetLevels& setEnsNetLevel(const vector<Models::DescribeEnsNetLevelResponseBodyEnsNetLevelsEnsNetLevel> & ensNetLevel) { DARABONBA_PTR_SET_VALUE(ensNetLevel_, ensNetLevel) };
    inline DescribeEnsNetLevelResponseBodyEnsNetLevels& setEnsNetLevel(vector<Models::DescribeEnsNetLevelResponseBodyEnsNetLevelsEnsNetLevel> && ensNetLevel) { DARABONBA_PTR_SET_RVALUE(ensNetLevel_, ensNetLevel) };


  protected:
    std::shared_ptr<vector<Models::DescribeEnsNetLevelResponseBodyEnsNetLevelsEnsNetLevel>> ensNetLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
