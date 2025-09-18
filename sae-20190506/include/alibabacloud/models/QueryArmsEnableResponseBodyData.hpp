// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYARMSENABLERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYARMSENABLERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class QueryArmsEnableResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryArmsEnableResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
    };
    friend void from_json(const Darabonba::Json& j, QueryArmsEnableResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
    };
    QueryArmsEnableResponseBodyData() = default ;
    QueryArmsEnableResponseBodyData(const QueryArmsEnableResponseBodyData &) = default ;
    QueryArmsEnableResponseBodyData(QueryArmsEnableResponseBodyData &&) = default ;
    QueryArmsEnableResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryArmsEnableResponseBodyData() = default ;
    QueryArmsEnableResponseBodyData& operator=(const QueryArmsEnableResponseBodyData &) = default ;
    QueryArmsEnableResponseBodyData& operator=(QueryArmsEnableResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enable_ != nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline QueryArmsEnableResponseBodyData& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


  protected:
    std::shared_ptr<bool> enable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
