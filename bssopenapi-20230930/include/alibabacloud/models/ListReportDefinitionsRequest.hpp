// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPORTDEFINITIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTREPORTDEFINITIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class ListReportDefinitionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListReportDefinitionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
    };
    friend void from_json(const Darabonba::Json& j, ListReportDefinitionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
    };
    ListReportDefinitionsRequest() = default ;
    ListReportDefinitionsRequest(const ListReportDefinitionsRequest &) = default ;
    ListReportDefinitionsRequest(ListReportDefinitionsRequest &&) = default ;
    ListReportDefinitionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListReportDefinitionsRequest() = default ;
    ListReportDefinitionsRequest& operator=(const ListReportDefinitionsRequest &) = default ;
    ListReportDefinitionsRequest& operator=(ListReportDefinitionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nbid_ == nullptr; };
    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline ListReportDefinitionsRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


  protected:
    shared_ptr<string> nbid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
