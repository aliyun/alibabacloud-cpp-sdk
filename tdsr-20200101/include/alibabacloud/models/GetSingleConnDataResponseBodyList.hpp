// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSINGLECONNDATARESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSINGLECONNDATARESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class GetSingleConnDataResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSingleConnDataResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MapId, mapId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetSingleConnDataResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MapId, mapId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetSingleConnDataResponseBodyList() = default ;
    GetSingleConnDataResponseBodyList(const GetSingleConnDataResponseBodyList &) = default ;
    GetSingleConnDataResponseBodyList(GetSingleConnDataResponseBodyList &&) = default ;
    GetSingleConnDataResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSingleConnDataResponseBodyList() = default ;
    GetSingleConnDataResponseBodyList& operator=(const GetSingleConnDataResponseBodyList &) = default ;
    GetSingleConnDataResponseBodyList& operator=(GetSingleConnDataResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->mapId_ == nullptr && return this->type_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetSingleConnDataResponseBodyList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mapId Field Functions 
    bool hasMapId() const { return this->mapId_ != nullptr;};
    void deleteMapId() { this->mapId_ = nullptr;};
    inline string mapId() const { DARABONBA_PTR_GET_DEFAULT(mapId_, "") };
    inline GetSingleConnDataResponseBodyList& setMapId(string mapId) { DARABONBA_PTR_SET_VALUE(mapId_, mapId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetSingleConnDataResponseBodyList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // ID
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> mapId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
