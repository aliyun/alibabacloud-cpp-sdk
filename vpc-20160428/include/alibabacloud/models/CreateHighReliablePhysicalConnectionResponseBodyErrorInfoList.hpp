// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHIGHRELIABLEPHYSICALCONNECTIONRESPONSEBODYERRORINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHIGHRELIABLEPHYSICALCONNECTIONRESPONSEBODYERRORINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateHighReliablePhysicalConnectionResponseBodyErrorInfoListErrorInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateHighReliablePhysicalConnectionResponseBodyErrorInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHighReliablePhysicalConnectionResponseBodyErrorInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(errorInfoList, errorInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHighReliablePhysicalConnectionResponseBodyErrorInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(errorInfoList, errorInfoList_);
    };
    CreateHighReliablePhysicalConnectionResponseBodyErrorInfoList() = default ;
    CreateHighReliablePhysicalConnectionResponseBodyErrorInfoList(const CreateHighReliablePhysicalConnectionResponseBodyErrorInfoList &) = default ;
    CreateHighReliablePhysicalConnectionResponseBodyErrorInfoList(CreateHighReliablePhysicalConnectionResponseBodyErrorInfoList &&) = default ;
    CreateHighReliablePhysicalConnectionResponseBodyErrorInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHighReliablePhysicalConnectionResponseBodyErrorInfoList() = default ;
    CreateHighReliablePhysicalConnectionResponseBodyErrorInfoList& operator=(const CreateHighReliablePhysicalConnectionResponseBodyErrorInfoList &) = default ;
    CreateHighReliablePhysicalConnectionResponseBodyErrorInfoList& operator=(CreateHighReliablePhysicalConnectionResponseBodyErrorInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorInfoList_ == nullptr; };
    // errorInfoList Field Functions 
    bool hasErrorInfoList() const { return this->errorInfoList_ != nullptr;};
    void deleteErrorInfoList() { this->errorInfoList_ = nullptr;};
    inline const vector<Models::CreateHighReliablePhysicalConnectionResponseBodyErrorInfoListErrorInfoList> & errorInfoList() const { DARABONBA_PTR_GET_CONST(errorInfoList_, vector<Models::CreateHighReliablePhysicalConnectionResponseBodyErrorInfoListErrorInfoList>) };
    inline vector<Models::CreateHighReliablePhysicalConnectionResponseBodyErrorInfoListErrorInfoList> errorInfoList() { DARABONBA_PTR_GET(errorInfoList_, vector<Models::CreateHighReliablePhysicalConnectionResponseBodyErrorInfoListErrorInfoList>) };
    inline CreateHighReliablePhysicalConnectionResponseBodyErrorInfoList& setErrorInfoList(const vector<Models::CreateHighReliablePhysicalConnectionResponseBodyErrorInfoListErrorInfoList> & errorInfoList) { DARABONBA_PTR_SET_VALUE(errorInfoList_, errorInfoList) };
    inline CreateHighReliablePhysicalConnectionResponseBodyErrorInfoList& setErrorInfoList(vector<Models::CreateHighReliablePhysicalConnectionResponseBodyErrorInfoListErrorInfoList> && errorInfoList) { DARABONBA_PTR_SET_RVALUE(errorInfoList_, errorInfoList) };


  protected:
    std::shared_ptr<vector<Models::CreateHighReliablePhysicalConnectionResponseBodyErrorInfoListErrorInfoList>> errorInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
