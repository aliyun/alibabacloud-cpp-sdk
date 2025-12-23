// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROCEEDINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROCEEDINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListProceedingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProceedingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(filterFinished, filterFinished_);
    };
    friend void from_json(const Darabonba::Json& j, ListProceedingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(filterFinished, filterFinished_);
    };
    ListProceedingsRequest() = default ;
    ListProceedingsRequest(const ListProceedingsRequest &) = default ;
    ListProceedingsRequest(ListProceedingsRequest &&) = default ;
    ListProceedingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProceedingsRequest() = default ;
    ListProceedingsRequest& operator=(const ListProceedingsRequest &) = default ;
    ListProceedingsRequest& operator=(ListProceedingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterFinished_ == nullptr; };
    // filterFinished Field Functions 
    bool hasFilterFinished() const { return this->filterFinished_ != nullptr;};
    void deleteFilterFinished() { this->filterFinished_ = nullptr;};
    inline bool filterFinished() const { DARABONBA_PTR_GET_DEFAULT(filterFinished_, false) };
    inline ListProceedingsRequest& setFilterFinished(bool filterFinished) { DARABONBA_PTR_SET_VALUE(filterFinished_, filterFinished) };


  protected:
    // Specifies whether the filtering is complete.
    std::shared_ptr<bool> filterFinished_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
