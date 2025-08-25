// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEVIDEOCOVERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GENERATEVIDEOCOVERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GenerateVideoCoverResponseBodyDataOutputs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class GenerateVideoCoverResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateVideoCoverResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateVideoCoverResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
    };
    GenerateVideoCoverResponseBodyData() = default ;
    GenerateVideoCoverResponseBodyData(const GenerateVideoCoverResponseBodyData &) = default ;
    GenerateVideoCoverResponseBodyData(GenerateVideoCoverResponseBodyData &&) = default ;
    GenerateVideoCoverResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateVideoCoverResponseBodyData() = default ;
    GenerateVideoCoverResponseBodyData& operator=(const GenerateVideoCoverResponseBodyData &) = default ;
    GenerateVideoCoverResponseBodyData& operator=(GenerateVideoCoverResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->outputs_ != nullptr; };
    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline const vector<Models::GenerateVideoCoverResponseBodyDataOutputs> & outputs() const { DARABONBA_PTR_GET_CONST(outputs_, vector<Models::GenerateVideoCoverResponseBodyDataOutputs>) };
    inline vector<Models::GenerateVideoCoverResponseBodyDataOutputs> outputs() { DARABONBA_PTR_GET(outputs_, vector<Models::GenerateVideoCoverResponseBodyDataOutputs>) };
    inline GenerateVideoCoverResponseBodyData& setOutputs(const vector<Models::GenerateVideoCoverResponseBodyDataOutputs> & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
    inline GenerateVideoCoverResponseBodyData& setOutputs(vector<Models::GenerateVideoCoverResponseBodyDataOutputs> && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


  protected:
    std::shared_ptr<vector<Models::GenerateVideoCoverResponseBodyDataOutputs>> outputs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
