// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBAASFABRICCONSORTIUMRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTBAASFABRICCONSORTIUMRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListBaaSFabricConsortiumResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBaaSFabricConsortiumResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BaaSFabricConsortiumId, baaSFabricConsortiumId_);
      DARABONBA_PTR_TO_JSON(BaaSFabricConsortiumName, baaSFabricConsortiumName_);
    };
    friend void from_json(const Darabonba::Json& j, ListBaaSFabricConsortiumResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BaaSFabricConsortiumId, baaSFabricConsortiumId_);
      DARABONBA_PTR_FROM_JSON(BaaSFabricConsortiumName, baaSFabricConsortiumName_);
    };
    ListBaaSFabricConsortiumResponseBodyData() = default ;
    ListBaaSFabricConsortiumResponseBodyData(const ListBaaSFabricConsortiumResponseBodyData &) = default ;
    ListBaaSFabricConsortiumResponseBodyData(ListBaaSFabricConsortiumResponseBodyData &&) = default ;
    ListBaaSFabricConsortiumResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBaaSFabricConsortiumResponseBodyData() = default ;
    ListBaaSFabricConsortiumResponseBodyData& operator=(const ListBaaSFabricConsortiumResponseBodyData &) = default ;
    ListBaaSFabricConsortiumResponseBodyData& operator=(ListBaaSFabricConsortiumResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baaSFabricConsortiumId_ == nullptr
        && return this->baaSFabricConsortiumName_ == nullptr; };
    // baaSFabricConsortiumId Field Functions 
    bool hasBaaSFabricConsortiumId() const { return this->baaSFabricConsortiumId_ != nullptr;};
    void deleteBaaSFabricConsortiumId() { this->baaSFabricConsortiumId_ = nullptr;};
    inline string baaSFabricConsortiumId() const { DARABONBA_PTR_GET_DEFAULT(baaSFabricConsortiumId_, "") };
    inline ListBaaSFabricConsortiumResponseBodyData& setBaaSFabricConsortiumId(string baaSFabricConsortiumId) { DARABONBA_PTR_SET_VALUE(baaSFabricConsortiumId_, baaSFabricConsortiumId) };


    // baaSFabricConsortiumName Field Functions 
    bool hasBaaSFabricConsortiumName() const { return this->baaSFabricConsortiumName_ != nullptr;};
    void deleteBaaSFabricConsortiumName() { this->baaSFabricConsortiumName_ = nullptr;};
    inline string baaSFabricConsortiumName() const { DARABONBA_PTR_GET_DEFAULT(baaSFabricConsortiumName_, "") };
    inline ListBaaSFabricConsortiumResponseBodyData& setBaaSFabricConsortiumName(string baaSFabricConsortiumName) { DARABONBA_PTR_SET_VALUE(baaSFabricConsortiumName_, baaSFabricConsortiumName) };


  protected:
    std::shared_ptr<string> baaSFabricConsortiumId_ = nullptr;
    std::shared_ptr<string> baaSFabricConsortiumName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
