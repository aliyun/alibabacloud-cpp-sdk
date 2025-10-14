// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDENTRIESRESPONSEBODYDENTRIESPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_LISTDENTRIESRESPONSEBODYDENTRIESPROPERTIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListDentriesResponseBodyDentriesProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDentriesResponseBodyDentriesProperties& obj) { 
      DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
    };
    friend void from_json(const Darabonba::Json& j, ListDentriesResponseBodyDentriesProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
    };
    ListDentriesResponseBodyDentriesProperties() = default ;
    ListDentriesResponseBodyDentriesProperties(const ListDentriesResponseBodyDentriesProperties &) = default ;
    ListDentriesResponseBodyDentriesProperties(ListDentriesResponseBodyDentriesProperties &&) = default ;
    ListDentriesResponseBodyDentriesProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDentriesResponseBodyDentriesProperties() = default ;
    ListDentriesResponseBodyDentriesProperties& operator=(const ListDentriesResponseBodyDentriesProperties &) = default ;
    ListDentriesResponseBodyDentriesProperties& operator=(ListDentriesResponseBodyDentriesProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->readOnly_ == nullptr; };
    // readOnly Field Functions 
    bool hasReadOnly() const { return this->readOnly_ != nullptr;};
    void deleteReadOnly() { this->readOnly_ = nullptr;};
    inline bool readOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
    inline ListDentriesResponseBodyDentriesProperties& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


  protected:
    std::shared_ptr<bool> readOnly_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
