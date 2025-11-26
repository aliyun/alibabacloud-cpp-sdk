// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEBINDNUMBERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEBINDNUMBERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateInstanceBindNumberResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateInstanceBindNumberResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceBindNumberResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceBindNumberResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
    };
    CreateInstanceBindNumberResponseBodyData() = default ;
    CreateInstanceBindNumberResponseBodyData(const CreateInstanceBindNumberResponseBodyData &) = default ;
    CreateInstanceBindNumberResponseBodyData(CreateInstanceBindNumberResponseBodyData &&) = default ;
    CreateInstanceBindNumberResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceBindNumberResponseBodyData() = default ;
    CreateInstanceBindNumberResponseBodyData& operator=(const CreateInstanceBindNumberResponseBodyData &) = default ;
    CreateInstanceBindNumberResponseBodyData& operator=(CreateInstanceBindNumberResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::CreateInstanceBindNumberResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::CreateInstanceBindNumberResponseBodyDataList>) };
    inline vector<Models::CreateInstanceBindNumberResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::CreateInstanceBindNumberResponseBodyDataList>) };
    inline CreateInstanceBindNumberResponseBodyData& setList(const vector<Models::CreateInstanceBindNumberResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline CreateInstanceBindNumberResponseBodyData& setList(vector<Models::CreateInstanceBindNumberResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


  protected:
    std::shared_ptr<vector<Models::CreateInstanceBindNumberResponseBodyDataList>> list_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
