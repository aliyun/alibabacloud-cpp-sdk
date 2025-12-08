// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BODYPOSTURERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_BODYPOSTURERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BodyPostureResponseBodyDataMetaObject.hpp>
#include <vector>
#include <alibabacloud/models/BodyPostureResponseBodyDataOutputs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class BodyPostureResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BodyPostureResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MetaObject, metaObject_);
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
    };
    friend void from_json(const Darabonba::Json& j, BodyPostureResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MetaObject, metaObject_);
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
    };
    BodyPostureResponseBodyData() = default ;
    BodyPostureResponseBodyData(const BodyPostureResponseBodyData &) = default ;
    BodyPostureResponseBodyData(BodyPostureResponseBodyData &&) = default ;
    BodyPostureResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BodyPostureResponseBodyData() = default ;
    BodyPostureResponseBodyData& operator=(const BodyPostureResponseBodyData &) = default ;
    BodyPostureResponseBodyData& operator=(BodyPostureResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metaObject_ == nullptr
        && return this->outputs_ == nullptr; };
    // metaObject Field Functions 
    bool hasMetaObject() const { return this->metaObject_ != nullptr;};
    void deleteMetaObject() { this->metaObject_ = nullptr;};
    inline const Models::BodyPostureResponseBodyDataMetaObject & metaObject() const { DARABONBA_PTR_GET_CONST(metaObject_, Models::BodyPostureResponseBodyDataMetaObject) };
    inline Models::BodyPostureResponseBodyDataMetaObject metaObject() { DARABONBA_PTR_GET(metaObject_, Models::BodyPostureResponseBodyDataMetaObject) };
    inline BodyPostureResponseBodyData& setMetaObject(const Models::BodyPostureResponseBodyDataMetaObject & metaObject) { DARABONBA_PTR_SET_VALUE(metaObject_, metaObject) };
    inline BodyPostureResponseBodyData& setMetaObject(Models::BodyPostureResponseBodyDataMetaObject && metaObject) { DARABONBA_PTR_SET_RVALUE(metaObject_, metaObject) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline const vector<Models::BodyPostureResponseBodyDataOutputs> & outputs() const { DARABONBA_PTR_GET_CONST(outputs_, vector<Models::BodyPostureResponseBodyDataOutputs>) };
    inline vector<Models::BodyPostureResponseBodyDataOutputs> outputs() { DARABONBA_PTR_GET(outputs_, vector<Models::BodyPostureResponseBodyDataOutputs>) };
    inline BodyPostureResponseBodyData& setOutputs(const vector<Models::BodyPostureResponseBodyDataOutputs> & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
    inline BodyPostureResponseBodyData& setOutputs(vector<Models::BodyPostureResponseBodyDataOutputs> && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


  protected:
    std::shared_ptr<Models::BodyPostureResponseBodyDataMetaObject> metaObject_ = nullptr;
    std::shared_ptr<vector<Models::BodyPostureResponseBodyDataOutputs>> outputs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
