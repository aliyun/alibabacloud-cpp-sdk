// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFACEDBSRESPONSEBODYDATADBLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTFACEDBSRESPONSEBODYDATADBLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class ListFaceDbsResponseBodyDataDbList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFaceDbsResponseBodyDataDbList& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListFaceDbsResponseBodyDataDbList& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListFaceDbsResponseBodyDataDbList() = default ;
    ListFaceDbsResponseBodyDataDbList(const ListFaceDbsResponseBodyDataDbList &) = default ;
    ListFaceDbsResponseBodyDataDbList(ListFaceDbsResponseBodyDataDbList &&) = default ;
    ListFaceDbsResponseBodyDataDbList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFaceDbsResponseBodyDataDbList() = default ;
    ListFaceDbsResponseBodyDataDbList& operator=(const ListFaceDbsResponseBodyDataDbList &) = default ;
    ListFaceDbsResponseBodyDataDbList& operator=(ListFaceDbsResponseBodyDataDbList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListFaceDbsResponseBodyDataDbList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
